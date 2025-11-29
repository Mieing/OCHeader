@class UILabel, UIImageView;

@interface AWEIMEmoticonImageTitleCollectionViewCell : AWEIMEmoticonImageCollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *limitedImageView;

- (void)layoutComponent;
- (void)createComponent;
- (void)renderUIWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
