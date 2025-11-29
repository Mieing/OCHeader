@class WCDataItem, WCAdURLImageView, WCAdSocialLikeLogic, WCAdContinuousLikeTagInfo, NSString, MMUIButton, MMUILabel;

@interface WCAdContinuousLikeTagView : MMUIView <IWCAdSocialLikeLogicExt>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdContinuousLikeTagInfo *tagInfo;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) MMUILabel *likeNumberTitle;
@property (retain, nonatomic) MMUILabel *continuousLikeTitle;
@property (retain, nonatomic) MMUILabel *continuousLikeNumber;
@property (retain, nonatomic) MMUIButton *jumpLinkButton;
@property (retain, nonatomic) WCAdURLImageView *jumpLinkIcon;
@property (readonly, nonatomic) WCAdSocialLikeLogic *socialLikeLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tagInfo:(id)a1 dataItem:(id)a2 contentItemScene:(unsigned long long)a3;
- (void)dealloc;
- (void)initView;
- (void)cleanSubViews;
- (void)initNotLikeView;
- (void)initLikedView;
- (void)initContinuousLikingView;
- (void)updateDataItem:(id)a0;
- (void)updateContinuousLikeNumber:(int)a0;
- (void)playContinuousLikeNumberAnimation;
- (void)onJumpLinkButtonClick:(id)a0;
- (void)onJumpLinkButtonTouchDown:(id)a0;
- (void)onJumpLinkButtonTouchUp:(id)a0;
- (void)resetJumpLinkButtonState;
- (void)onContinuousLikeStateChanged:(id)a0 contentItemScene:(unsigned long long)a1 likeState:(int)a2;
- (void)onContinuousLikeCountChanged:(id)a0 contentItemScene:(unsigned long long)a1 likeCount:(int)a2;
- (void).cxx_destruct;

@end
