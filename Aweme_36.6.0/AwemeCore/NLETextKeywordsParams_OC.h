@class NLETextEmphasisParam_OC, NLERichTextStyle_OC;

@interface NLETextKeywordsParams_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLETextKeyWordsParams> { struct NLETextKeyWordsParams *x0; struct __shared_weak_count *x1; } cppValue;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int styleIndex;
@property (nonatomic) NLETextEmphasisParam_OC *emphasisParam;
@property (nonatomic) NLERichTextStyle_OC *highlightRichStyle;

@end
