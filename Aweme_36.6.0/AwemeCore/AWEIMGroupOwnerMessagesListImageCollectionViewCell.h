@class UIImageView, UILabel;

@interface AWEIMGroupOwnerMessagesListImageCollectionViewCell : AWEIMGroupOwnerMessagesListCollectionViewCell

@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImageView *decorationIconView;
@property (retain, nonatomic) UILabel *contentLabel;

+ (id)identifier;

- (void)renderCustomizeContentWithVM:(id)a0;
- (void)__setupUnavailableUI;
- (void)__setupAvailableUI;
- (void)__setupImageWithViewModel:(id)a0;
- (void)__observeViewModelImage;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
