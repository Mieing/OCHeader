@class UIImageView, UIView;
@protocol IESECWindowFeedVideoComponentModel;

@interface IESECWindowFeedVideoComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) UIView *playerContainer;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *playIcon;
@property (retain, nonatomic) UIView *linearGradient;
@property (weak, nonatomic) id<IESECWindowFeedVideoComponentModel> dataSource;

+ (id /* block */)video:(id)a0;

- (void)clickAction;
- (void)updateUIWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
