@class UIImageView, UILabel, UIView;

@interface AWEUserLoginLogoView : UIView

@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *fullScreenLogoLabel;
@property (retain, nonatomic) UILabel *halfScreenLogoLabel;
@property (retain, nonatomic) UIView *halfScreenVerticalLine;

- (void)setupHalfScreenLogoView;
- (void)setupFullScreenLogoView;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
