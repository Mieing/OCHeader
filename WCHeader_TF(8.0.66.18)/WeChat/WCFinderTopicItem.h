@interface WCFinderTopicItem : NSObject

+ (id)checkBinds:(id)a0 inText:(id)a1;
+ (id)handleTextToXML:(id)a0 bindArray:(id)a1;
+ (id)handleTextToXML:(id)a0;
+ (id)genTextToXML:(id)a0 bindRangeArray:(id)a1;
+ (id)parseFromTid:(id)a0 XMLString:(id)a1 contentTitle:(id)a2;
+ (id)filterPreURLByContent:(id)a0;
+ (id)handlePureContentParseLogic:(id)a0 highlightRangeObjectArray:(id)a1 curContent:(id)a2;
+ (unsigned long long)getPrefixWellSymbolCount:(id)a0;
+ (id)removeHeadRearWellSymbol:(id)a0;
+ (id)connectUrl:(id)a0 url:(id)a1;
+ (id)appendParamsDic:(id)a0 toUrl:(id)a1;
+ (BOOL)xmlIsAllTopicContentWithTopicsArray:(id)a0 content:(id)a1;
+ (id)topicColorStyle;

@end
