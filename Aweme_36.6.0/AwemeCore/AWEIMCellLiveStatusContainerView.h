@class AFDStoryGradientRingView, UIView;
@protocol AWEIMCellLiveStatusContainerViewDelegate, AWELiveStatusViewProtocol, AWELiveEntryProtocol;

@interface AWEIMCellLiveStatusContainerView : UIView

@property (retain, nonatomic) UIView<AWELiveStatusViewProtocol> *liveStatusIndicatorView;
@property (readonly, nonatomic) BOOL enableClick;
@property (nonatomic) BOOL lastHiddenStatus;
@property (retain, nonatomic) AFDStoryGradientRingView *colorRingView;
@property (retain, nonatomic) id<AWELiveEntryProtocol> liveEntryProtocol;
@property (weak, nonatomic) id<AWEIMCellLiveStatusContainerViewDelegate> delegate;

- (void)p_addTapGestureIfNeeded;
- (void)updateLiveStatusContent:(id)a0;
- (void)p_handleTap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enableClick:(BOOL)a1 withLiveEntryProtocol:(id)a2;
- (void)updateLiveColorRingHidden:(BOOL)a0;
- (void)p_initUI;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;

@end
