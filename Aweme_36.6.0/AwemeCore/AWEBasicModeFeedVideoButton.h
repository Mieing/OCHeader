@class UIImageView, UILabel, UIView;

@interface AWEBasicModeFeedVideoButton : UIButton

@property (retain, nonatomic) UIImageView *aweImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *containerView;

- (id)initWithLabelString:(id)a0 imageNameString:(id)a1;
- (void)updateWithLabelString:(id)a0;
- (void)updateWithImageNameString:(id)a0;
- (void).cxx_destruct;

@end
