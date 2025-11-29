@class UILabel, IESECUIImageView;

@interface IESECMallDeepFeedLoadMoreView : UIView

@property (retain, nonatomic) IESECUIImageView *slideIcon;
@property (retain, nonatomic) UILabel *slideLabel;

- (void)updateLoadMorePercent:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
