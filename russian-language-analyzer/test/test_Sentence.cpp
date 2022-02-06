
#include "boost/test/unit_test.hpp"

#include "Sentence.h"
#include "Utils.h"

using namespace RussianLanguageAnalyzer;
using namespace Morphology;

BOOST_AUTO_TEST_SUITE(SentenceTests);

BOOST_AUTO_TEST_CASE(constructor)
{
  using namespace RussianLanguageAnalyzer;

  Sentence s("�������� ������� ����� ������ �");

  BOOST_TEST(*s.object()    == "�������");
  BOOST_TEST(*s.subject()   == "�");
  BOOST_TEST(*s.predicate() == "�����");
}

BOOST_AUTO_TEST_SUITE_END();