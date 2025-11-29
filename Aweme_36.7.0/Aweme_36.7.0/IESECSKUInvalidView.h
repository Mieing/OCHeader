@class UIView, IESECUIImageView;
@protocol IESECSKUInvalidViewDelegate;

@interface IESECSKUInvalidView : UIView

@property (retain, nonatomic) IESECUIImageView *imageView;
@property (retain, nonatomic) UIView *knownView;
@property (weak, nonatomic) id<IESECSKUInvalidViewDelegate> delegate;

- (void)tapKnowView;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setupUI;

@end
