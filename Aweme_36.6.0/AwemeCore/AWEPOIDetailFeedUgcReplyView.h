@class UIView, NSString, UIImageView, AWEPOIDetailFeedUgcRateLabel, AWEPOIFeedUgcItemModel, UILabel, AWEPOIDetailFeedUgcInfoTagsContainerView;
@protocol AWEPOIDetailFeedUgcReplyViewDelegate;

@interface AWEPOIDetailFeedUgcReplyView : UIView <AWEPOIDetailFeedUgcRateLabelDelegate>

@property (retain, nonatomic) AWEPOIFeedUgcItemModel *ugcModel;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcInfoTagsContainerView *userTagsView;
@property (retain, nonatomic) UILabel *replyToLabel;
@property (retain, nonatomic) AWEPOIDetailFeedUgcRateLabel *contentLabel;
@property (retain, nonatomic) UIView *spaceLine;
@property (retain, nonatomic) UIView *moreEntranceView;
@property (weak, nonatomic) id<AWEPOIDetailFeedUgcReplyViewDelegate> delegate;
@property (readonly, nonatomic) long long ugcOrderIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0;
- (void)enterUserPage;
- (id)ugcTrackingParams;
- (void)didClickAvatar;
- (void)updateWithUgcModel:(id)a0;
- (void)updateReplyViewForCount;
- (void)didClickExpand;
- (void)didClickExpandToken:(long long)a0;
- (void)didClickUserName;
- (void)didClickCollapseToken:(long long)a0;
- (id)nameTextWithNickName:(id)a0 maxLength:(long long)a1;
- (void)updateMoreEntranceForCount;
- (void)updateBottomUIForCount;
- (void)didClickMore;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
