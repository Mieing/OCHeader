@class UIImageView, CAShapeLayer, UILabel, NSMutableArray;

@interface IESLiveConsumeUserEnterView : IESLiveMessageInteractionUserEnterView

@property (retain, nonatomic) UIImageView *containerView;
@property (retain, nonatomic) UIImageView *ecommerceImageView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) NSMutableArray *whiteShadowArray;
@property (retain, nonatomic) NSMutableArray *streamLineArray;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;

- (void)touchViewDidTap;
- (void)updateWithEnterMessageNode:(id)a0;
- (id)createStreamLine:(double)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutUI;

@end
