@class WCFinderLiveHomePageFeedEntertainmentGenericNotification, MMWebImageView, RichTextView, UIView;

@interface WCFinderLiveHomePageEntertainmentGenericNotificationView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) RichTextView *titleLabel;
@property (retain, nonatomic) WCFinderLiveHomePageFeedEntertainmentGenericNotification *data;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)updateWithInfo:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
