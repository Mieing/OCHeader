@class UILabel, UIStackView;

@interface AWEIMSeviceChatRoleCardTagView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *label;

- (void)onTapView:(id)a0;
- (double)spacingWithType:(int)a0;
- (double)cacuelateWidthForItem:(id)a0;
- (void)showDialogWithPopupWindow:(id)a0;
- (double)caculateWidthForText:(id)a0 font:(id)a1;
- (void).cxx_destruct;
- (void)setItems:(id)a0;
- (id)init;

@end
