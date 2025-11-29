@class UIStackView, UIButton, UIImageView, UIImage, UILabel, NSString, UIViewController;

@interface AWEGeneralSearchHelpPublishResultView : UIView

@property (weak, nonatomic) UIViewController *containerVC;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIStackView *textContainerView;
@property (retain, nonatomic) UIButton *actionButton;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) NSString *coverImageURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (nonatomic) double showDuration;
@property (copy, nonatomic) id /* block */ actionButtonClicked;

+ (struct CGSize { double x0; double x1; })contentSize;

- (void)dismissWithAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerVC:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (void)show;
- (void)actionButtonTapped:(id)a0;

@end
