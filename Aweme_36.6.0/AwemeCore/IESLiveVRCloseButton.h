@class UIImageView, UILabel, CAShapeLayer;

@interface IESLiveVRCloseButton : UIControl

@property (retain, nonatomic) CAShapeLayer *shaperLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL dragType;

- (void)setUI;
- (void).cxx_destruct;
- (id)init;

@end
