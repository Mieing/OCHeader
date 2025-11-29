@class UILabel, UIImageView, UIView;

@interface AWEIMEmoticonPetELFImageTitleCollectionViewCell : AWEIMEmoticonImageCollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UIImageView *loadingImageView;

- (void)layoutComponent;
- (void)createComponent;
- (void)renderUIWithViewModel:(id)a0;
- (void).cxx_destruct;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end
