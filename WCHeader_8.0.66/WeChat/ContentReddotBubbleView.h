@class WCPayWebImageView, WCRedEnvelopesSelectSkinRedDotInfo, UIImageView, UILabel;

@interface ContentReddotBubbleView : UIView

@property (retain, nonatomic) UIImageView *m_arrowImageView;
@property (retain, nonatomic) UIImageView *m_bubbleImageView;
@property (retain, nonatomic) UILabel *m_contentLabel;
@property (retain, nonatomic) WCPayWebImageView *m_iconImageView;
@property (retain, nonatomic) WCRedEnvelopesSelectSkinRedDotInfo *m_reddotInfo;

- (id)initWithReddotInfo:(id)a0;
- (void)setupSubviews;
- (void).cxx_destruct;

@end
