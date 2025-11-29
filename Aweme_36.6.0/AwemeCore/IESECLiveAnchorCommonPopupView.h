@class IESECLiveRoomContext, UILabel, UIView, UIButton;

@interface IESECLiveAnchorCommonPopupView : UIView

@property (weak, nonatomic) UIView *rootView;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (nonatomic) BOOL isRootViewScaled;
@property (retain, nonatomic) IESECLiveRoomContext *roomContext;
@property (nonatomic) double height;
@property (nonatomic) BOOL rounded;
@property (readonly, nonatomic) double headerHeight;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *titleRightButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) id /* block */ confirmToDismiss;
@property (copy, nonatomic) id /* block */ tapMaskViewBlock;

- (void)tapMaskView;
- (id)initWithHeight:(double)a0 rootView:(id)a1;
- (id)initWithHeight:(double)a0 rootView:(id)a1 isRootViewScaled:(BOOL)a2;
- (double)rootViewHeightWithView:(id)a0;
- (double)rootViewWidthWithView:(id)a0;
- (void)tryDismiss;
- (id)initWithHeight:(double)a0 roomContext:(id)a1;
- (void)p_setupUI;
- (void)dismiss;
- (void).cxx_destruct;
- (void)show;

@end
