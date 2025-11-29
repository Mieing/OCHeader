@class UIView, NSString, WCFinderFeedStaticCoverCollectionViewCell, WCFinderLiveGenericFeedVM, WCFinderAuthInfoIconView, RichTextView, MMUILabel, WCFinderHeadImageView;
@protocol WCFinderLiveHomePageLiveReplayCardCellDelegate;

@interface WCFinderLiveHomePageLiveReplayCardCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderLiveGenericFeedVMDelegate, WCFinderLiveFeedGenericCellPlayProtocol, WCFinderLiveFeedGenericCardCellProtocol>

@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (retain, nonatomic) WCFinderFeedStaticCoverCollectionViewCell *liveReplayView;
@property (retain, nonatomic) UIView *liveReplayMaskView;
@property (retain, nonatomic) UIView *authorView;
@property (retain, nonatomic) UIView *avatorContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) RichTextView *mediaTitleTextView;
@property (retain, nonatomic) UIView *replayLabelView;
@property (retain, nonatomic) MMUILabel *replayText;
@property (retain, nonatomic) UIView *replayIconView;
@property (nonatomic) BOOL viewInitialized;
@property (weak, nonatomic) id<WCFinderLiveHomePageLiveReplayCardCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateUIElementsWithIsPlaying:(BOOL)a0;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)markTappedByUser;
- (void)prepareForMorphTransition;
- (void)updateWithFeedVM:(id)a0;
- (void)updateSkeletonable:(id)a0;
- (void)prepareForReuse;
- (void)onAuthorViewDidClick;
- (id)accessibilityLabel;
- (id)createPlayIconView;
- (void).cxx_destruct;

@end
