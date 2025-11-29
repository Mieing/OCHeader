@class UIView, NSString, WCFinderFittingWidthRichView;
@protocol WCFinderProfileShowInWXTipsSheetDelegate;

@interface WCFinderProfileShowInWXTipsSheet : MMUIViewController <ILinkEventExt, UIGestureRecognizerDelegate>

@property (retain, nonatomic) WCFinderFittingWidthRichView *detailRichTextView;
@property (retain, nonatomic) UIView *cardView;
@property (weak, nonatomic) id<WCFinderProfileShowInWXTipsSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showFromViewController:(id)a0;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)updateYogaLayout;
- (void)viewDidLoad;
- (void)addShape:(id)a0;
- (id)createBtnWithTitle:(id)a0 action:(SEL)a1 bgColor:(id)a2 titleColor:(id)a3;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)onBackGroundViewTapAction:(id)a0;
- (void)onClickCancelBtn:(id)a0;
- (void)onCancelAction;
- (void)onClickSettingBtn:(id)a0;
- (id)jumpWXProfileHref;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
