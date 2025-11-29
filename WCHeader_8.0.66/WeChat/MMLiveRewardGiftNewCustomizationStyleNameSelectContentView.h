@class MMLiveRewardGiftNewCustomizationInputToolView, MMFinderLiveNewCustomGiftText, MMLiveRewardGiftNewCustomizationEditLogic;

@interface MMLiveRewardGiftNewCustomizationStyleNameSelectContentView : MMLiveRewardGiftNewCustomizationStyleSelectContentView

@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationEditLogic *customizationEditLogic;
@property (readonly, nonatomic) MMFinderLiveNewCustomGiftText *customGiftText;
@property (retain, nonatomic) MMLiveRewardGiftNewCustomizationInputToolView *inputToolView;

- (id)initWithCustomizationEditLogic:(id)a0;
- (void)configCustomizationEditLogic:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputToolView;
- (void)initContentMode;
- (void)updateContentModeForEnableCustomTextAbility;
- (id)createInputToolView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)needAsyncBeginEditing;
- (void)asyncBeginEditing;
- (void)endEditing;
- (id)unspportTipClickHref;
- (id)styleObj;
- (id)getUnSupportTipWithConflictComponent:(id)a0;
- (void)onUnSupportTipLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
