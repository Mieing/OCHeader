@class UIScrollView, MMWebImageView;
@protocol WCLabSettingDetailImagesCellDelegate;

@interface WCLabSettingDetailImagesCell : UITableViewCell {
    UIScrollView *_scrollView;
    MMWebImageView *_webImageView;
    MMWebImageView *_webImageView2;
    MMWebImageView *_webImageView3;
}

@property (weak, nonatomic) id<WCLabSettingDetailImagesCellDelegate> delegate;

+ (double)height;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)a0;
- (void)onClickImage:(id)a0;
- (void)initImages;
- (void).cxx_destruct;

@end
