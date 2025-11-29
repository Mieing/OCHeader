@class UIButton, UIView;
@protocol WCFinderCommonDotTextActionSheetDelegate;

@interface WCFinderCommonDotTextActionSheet : WCActionSheet

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (weak, nonatomic) id<WCFinderCommonDotTextActionSheetDelegate> businessDelegate;

- (id)init;
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (id)getActionSheetConfig;
- (void)onClickCloseBtn;
- (void)onClickCommonBtn;
- (void).cxx_destruct;

@end
