@class UILabel, UIImageView;

@interface IESECMallDeepFeedRecReasonView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double width;

- (id)colorWithString:(id)a0 defaultColor:(id)a1;
- (void)updateWithRecReason:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
