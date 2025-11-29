@class UILabel, UIImage;

@interface RecentPhotoBubbleView : UIButton

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImage *originImage;

- (id)init;
- (id)initWithText:(id)a0 OriginImage:(id)a1 AndThumbImage:(id)a2;
- (void)initBackgroundImage;
- (void)initBubbleImageView:(id)a0;
- (void)initTextLabel:(id)a0;
- (void)layoutSubviews;
- (void)showRecentPhotoViewAnimated;
- (void)hideRecentPhotoViewAnimated;
- (void)dealloc;
- (void).cxx_destruct;

@end
