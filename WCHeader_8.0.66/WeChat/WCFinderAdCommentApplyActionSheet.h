@class MMUIButton, NSString, UIView;
@protocol WCFinderAdCommentApplyActionSheetDelegate;

@interface WCFinderAdCommentApplyActionSheet : WCActionSheet <ILinkEventExt>

@property (retain, nonatomic) UIView *tipsView;
@property (retain, nonatomic) MMUIButton *acceptBtn;
@property (nonatomic) int commentScene;
@property (weak, nonatomic) id<WCFinderAdCommentApplyActionSheetDelegate> applyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)heightOfWholeSheet;
- (double)getCustomView:(double)a0;
- (id)getTipsActionSheetView;
- (void)bindAdApplyReportFromView:(id)a0 viewId:(id)a1 reportPolicy:(unsigned long long)a2;
- (void)onCheckBoxClicked:(id)a0;
- (void)updateAcceptBtnBkg;
- (void)onClickAcceptBtn;
- (void)onClickCancelBtn;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismissWithClickedButtonIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
