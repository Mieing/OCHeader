@class UIImageView, UILabel;

@interface AWEAnchorAdditionODRGuideView : UIView

@property (retain, nonatomic) UIImageView *guideImage;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UILabel *guideContent;

- (void)updateWithGuideData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUpUI;

@end
