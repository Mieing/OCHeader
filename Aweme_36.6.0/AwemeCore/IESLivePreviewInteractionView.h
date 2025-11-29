@class NSString, UILabel, UIImageView;

@interface IESLivePreviewInteractionView : UIView

@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (nonatomic) long long clickCount;
@property (retain, nonatomic) UIImageView *imageView;

- (void)viewTapped;
- (void)updateIconWithImage:(id)a0;
- (void)setupViewWithTitle:(id)a0 image:(id)a1;
- (void)updateTitleString:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 image:(id)a1;

@end
