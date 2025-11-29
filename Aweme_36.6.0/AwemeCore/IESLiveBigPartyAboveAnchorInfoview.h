@class UIImageView, UILabel;
@protocol IESLiveSubscription;

@interface IESLiveBigPartyAboveAnchorInfoview : UIView

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIImageView *silenceView;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) id<IESLiveSubscription> dispose;
@property (nonatomic) BOOL isPreview;

- (void)didSetAttachingDIContext;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithUser:(id)a0;

@end
