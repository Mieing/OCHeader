@class UILabel;

@interface AWENearbyAutoScrollImgView : UIImageView

@property (retain, nonatomic) UILabel *loadingLabel;

- (id)initWithPlaceholderImage:(id)a0 LoadingLabelShow:(BOOL)a1;
- (void)loadImgCompleted:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
