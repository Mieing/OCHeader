@class MMUIButton, WCCanvasRandomPickCardButtonView, UILabel, WCCanvasRandomLayoutEncorePickInfo, WCCanvasRandomPickCardBottomIntroduceView;
@protocol WCCanvasRandomPickCardBottomViewDelegate;

@interface WCCanvasRandomPickCardBottomView : MMUIView

@property (retain, nonatomic) WCCanvasRandomLayoutEncorePickInfo *encoreInfo;
@property (weak, nonatomic) id<WCCanvasRandomPickCardBottomViewDelegate> delegate;
@property (retain, nonatomic) WCCanvasRandomPickCardBottomIntroduceView *introduceView;
@property (retain, nonatomic) UILabel *doneLabel;
@property (retain, nonatomic) WCCanvasRandomPickCardButtonView *buttonView;
@property (retain, nonatomic) MMUIButton *backgroundButton;
@property (nonatomic) BOOL didShowSwitchAnimation;

+ (struct CGSize { double x0; double x1; })calcSizeForEncoreInfo:(id)a0 orientation:(long long)a1;
+ (id)generateSimpleLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
+ (void)addShadowToView:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 encoreInfo:(id)a1 delegate:(id)a2;
- (void)dealloc;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)onPickCardViewClicked:(id)a0;
- (void)resetRandomPickCardBottomView;
- (void)showRandomPickCardBottomViewAnimated;
- (void)updateRandomCardsWithRemainCount;
- (void)showRandomPickCardBottomView;
- (void)scheduleRandomPickCardBottomViewSwitchAnimation;
- (void)hideRandomPickCardBottomView;
- (void)onHideRandomPickCardBottomViewDone;
- (void).cxx_destruct;

@end
