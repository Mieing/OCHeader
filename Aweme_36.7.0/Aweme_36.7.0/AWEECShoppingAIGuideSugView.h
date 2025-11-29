@class AWEECShoppingAIGuideContext, NSMutableArray, NSArray;

@interface AWEECShoppingAIGuideSugView : UIView

@property (retain, nonatomic) NSMutableArray *sectionArray;
@property (nonatomic) double totalUsableHeight;
@property (nonatomic) int numsOfSections;
@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (copy, nonatomic) NSArray *inputSugArray;
@property (copy, nonatomic) NSArray *keywordArray;

- (void)hideAllSections;
- (void)setNumsOfSections;
- (void)updateLabels:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupUI;

@end
