@class AWEInAppMessageConfig, UILabel, UIView, UIButton;
@protocol AWEInAppMessageViewDelegate;

@interface AWEInAppMessageView : UIView

@property (retain, nonatomic) AWEInAppMessageConfig *config;
@property (nonatomic) double oriTransY;
@property (nonatomic) double lastChangedY;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *goToButton;
@property (retain, nonatomic) UIView *dividingLine;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *imgContainerView;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (weak, nonatomic) id<AWEInAppMessageViewDelegate> dragDelegate;

- (void)showOnView:(id)a0;
- (void)dismiss:(BOOL)a0 dragRelease:(BOOL)a1;
- (void)goToButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pan:(id)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (void)dismiss:(BOOL)a0;
- (void)setupUI;

@end
