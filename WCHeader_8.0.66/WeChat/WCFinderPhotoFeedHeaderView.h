@class UIView, WCFinderPhotoFeedDetailDescriptionView, WCFinderFeedContentVM, NSString, WCFinderJumpInfoBubbleView, WCFinderJumpInfoCombinationView, WCFinderJumpInfoLBSCardView, WCFinderFriendLikeToolbarView, UILabel;
@protocol WCFinderPhotoFeedHeaderDelegate;

@interface WCFinderPhotoFeedHeaderView : UIView <WCFinderFeedDescriptionViewDelegate, WCFinderFriendLikeToolbarViewDelegate, WCFinderJumpInfoCombinationViewDelegate, WCFinderJumpInfoBubbleViewDelegate, WCFinderJumpInfoLBSCardViewDelegate, WCFinderFeedContentVMExt>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderJumpInfoCombinationView *redpacketBubble;
@property (retain, nonatomic) WCFinderJumpInfoBubbleView *redpacketNormalBubble;
@property (retain, nonatomic) WCFinderFriendLikeToolbarView *friendLikeView;
@property (retain, nonatomic) UILabel *feedShortTitleLabel;
@property (retain, nonatomic) WCFinderPhotoFeedDetailDescriptionView *feedDescriptionView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) WCFinderJumpInfoLBSCardView *lbsCard;
@property (nonatomic) double layoutWidth;
@property (weak, nonatomic) id<WCFinderPhotoFeedHeaderDelegate> delegate;
@property (retain, nonatomic) UIView *commentTopTipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(unsigned long long)a1 switchType:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)updateUI;
- (BOOL)shouldShowFriendLikeViewWithContentVM:(id)a0;
- (void)updateRedpacketBubbleWithForceUpdate:(BOOL)a0;
- (id)getRedpacketBubbleJumpInfo;
- (void)updateLBSCard;
- (void)updateWithContentVM:(id)a0;
- (void)updateShortTitleLabelWithContentVM:(id)a0;
- (void)updateFriendLikeViewWithContentVM:(id)a0;
- (void)updateCommentCountLabel:(id)a0;
- (unsigned long long)generateDisplayIdentifyType:(unsigned long long)a0;
- (void)onRefreshFriendUI:(id)a0;
- (void)clickContentPOIAction:(id)a0;
- (void)onClickEventEntry:(id)a0;
- (void)onClickLinkEntry:(id)a0;
- (void)onClickCollectionAction:(id)a0;
- (void)onClickContentUsernameAction:(id)a0 contentVM:(id)a1;
- (void)onClickContentMentionAction:(id)a0 nickname:(id)a1 contentVM:(id)a2;
- (void)onClickContentTopicAction:(id)a0 contentVM:(id)a1;
- (void)finderJumpInfoView:(id)a0 needChangeToStyleWithIndex:(unsigned long long)a1;
- (id)jumpInfoViewWithJumpInfo:(id)a0 subStyle:(id)a1;
- (void)onFinderJumpInfoCombinationViewDidClick:(id)a0;
- (void)onFinderJumpInfoBubbleViewDidClick:(id)a0;
- (void)lbsCardChangeFavState:(BOOL)a0 withJumpInfo:(id)a1;
- (void)lbsCardDidClickCardWithJumpInfo:(id)a0 style:(id)a1;
- (void)lbsCardLayoutHeightChanged;
- (void)onFeedContentJumpInfoContainerChanged:(id)a0 isPureUIChanged:(BOOL)a1 showPosition:(int)a2 scene:(int)a3;
- (void)onFeedContentJumpInfoContainerChanged:(id)a0 isPureUIChanged:(BOOL)a1 showPosition:(int)a2 scene:(int)a3 disableReport:(BOOL)a4;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (void).cxx_destruct;

@end
