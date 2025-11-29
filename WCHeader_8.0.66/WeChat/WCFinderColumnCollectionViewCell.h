@class NSString, WCFinderFeedContentVM, UIButton, WCFinderSimplePlayerView, WCFinderRichTextView, WCFinderFriendLikeCustomInfoView, WCFinderHeadContactInfoView, WCFinderHeadImageView, WCFinderAuthInfoIconView;
@protocol WCFinderColumnCollectionViewCellDelegate;

@interface WCFinderColumnCollectionViewCell : UICollectionViewCell <WCFinderFeedContentMediaActionProtocol, WCFinderZoomAnimatorBehavior, WCFinderFeedContentVMExt, WCFinderColumnCollectionViewBaseCellProtocol>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderSimplePlayerView *playerView;
@property (retain, nonatomic) WCFinderRichTextView *descView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authView;
@property (retain, nonatomic) WCFinderHeadContactInfoView *contactInfoView;
@property (retain, nonatomic) WCFinderFriendLikeCustomInfoView *friendLikeView;
@property (retain, nonatomic) WCFinderRichTextView *recommendReasonTextView;
@property (retain, nonatomic) UIButton *likeButton;
@property (weak, nonatomic) id<WCFinderColumnCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellId;
+ (id)adjustContent:(id)a0 withColorHexStr:(id)a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateWithContentVM:(id)a0;
- (void)playVideoIfSupportWithSilencePlay:(BOOL)a0;
- (void)stopVideoIfSupport;
- (void)pause;
- (BOOL)isPlaying;
- (void)setThumbImageHidden:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateToolBarAreaWithContentVM:(id)a0;
- (void)onClickLikeButton:(id)a0;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)contentMediaDidEndPlay:(id)a0;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (id)zoomAnimatorKey;
- (void).cxx_destruct;

@end
