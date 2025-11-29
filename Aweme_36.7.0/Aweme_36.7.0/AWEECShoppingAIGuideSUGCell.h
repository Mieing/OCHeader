@class NSArray, AWEECShoppingAIGuideMessageGroupViewModel;

@interface AWEECShoppingAIGuideSUGCell : AWEECShoppingAIGuideBaseCell

@property (retain, nonatomic) NSArray *sugList;
@property (retain, nonatomic) AWEECShoppingAIGuideMessageGroupViewModel *messageViewModel;

+ (double)cellHeightForViewModel:(id)a0;
+ (double)itemHeightWithRole:(unsigned long long)a0;

- (void)setupUIWithMessageModel:(id)a0;
- (double)sugCellHeight;
- (id)initWithSUGList:(id)a0;
- (void).cxx_destruct;

@end
