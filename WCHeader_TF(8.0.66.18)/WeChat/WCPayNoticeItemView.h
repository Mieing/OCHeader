@class WCPayWebImageView, NoticeItem, UIImageView, UILabel, UIView, UIButton;

@interface WCPayNoticeItemView : UIView

@property (retain, nonatomic) NoticeItem *noticeItem;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCPayWebImageView *leftIconImageView;
@property (retain, nonatomic) UIImageView *rightArrowImageView;
@property (retain, nonatomic) UIButton *jumpButton;

- (void)updateViewWithItem:(id)a0;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)a0;
- (void)jumpToNoticeUrl;
- (void)updateView;
- (void).cxx_destruct;

@end
