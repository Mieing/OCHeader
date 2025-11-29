@class NSMutableArray;

@interface ACCLoraSuiteCustomKeyWordsDelegate : NSObject

@property (nonatomic) long long maxSingleLength;
@property (nonatomic) long long maxLength;
@property (retain, nonatomic) NSMutableArray *totalKeyWordsArray;
@property (nonatomic) BOOL needNR;
@property (nonatomic) BOOL needMore;

- (id)getAllSupportSplit;
- (id)initWithSingleMaxLength:(unsigned long long)a0 totalMaxLength:(unsigned long long)a1;
- (id)isInputRuleSupportMoreChinese:(id)a0;
- (void)setUpData;
- (id)constructionDefaultString:(id)a0 officialKeyWordsList:(id)a1;
- (id)singleKeyWordStatusChanged:(id)a0 keyword:(id)a1 isSelect:(BOOL)a2 inCurrentIndex:(unsigned long long)a3 indexInRecommendList:(unsigned long long)a4;
- (BOOL)isTotalKeyWordAllSplit:(id)a0;
- (BOOL)isInputRuleOnlyChinese:(id)a0;
- (id)makeOfficialKeyWordChangeIfNeed:(id)a0 isSelect:(BOOL)a1 indexInCurrentArray:(unsigned long long)a2 indexInRecommendList:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)textViewDidChange:(id)a0;

@end
