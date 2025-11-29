@class UIImageView, UIButton, UIView;

@interface AWEGrouponWidgetView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *expandedImageView;
@property (retain, nonatomic) UIImageView *foldedImageView;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) id /* block */ tapHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (nonatomic) unsigned long long state;

- (void)dismissButtonTapped;
- (void)contentTapped;
- (void)performUpdateFromState:(unsigned long long)a0 toState:(unsigned long long)a1 animated:(BOOL)a2;
- (void)performHiddenAnimation;
- (void)performFoldedAnimation;
- (void)__configFoldedState;
- (void)performExpandedAnimation;
- (void)__configExpandedState;
- (void)updateWidgetWithExpandedImageURLList:(id)a0 foldedImageURLList:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)init;
- (void)setState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setupUI;

@end
