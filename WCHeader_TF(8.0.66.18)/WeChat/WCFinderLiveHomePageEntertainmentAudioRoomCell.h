@class UIView, NSString, WCFinderLiveHomePageFeedEntertainmentAudioRoomVM, WCFinderFeedImageCDNView, WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView, WCFinderAuthInfoIconView, RichTextView, WCFinderHeadImageView, InfiniteLoopContainerView, MMTimer;
@protocol WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate;

@interface WCFinderLiveHomePageEntertainmentAudioRoomCell : WCFinderLiveFeedGenericCdnCell <InfiniteLoopContainerViewDelegate, WCFinderLiveHomePageFeedEntertainmentAudioRoomVMDelegate, WCFinderHeadImageViewDelegate, WCFinderLiveHomePageEntertainmentAudioRoomTeamupListViewDelegate>

@property (retain, nonatomic) WCFinderLiveHomePageFeedEntertainmentAudioRoomVM *feedVM;
@property (retain, nonatomic) WCFinderLiveHomePageEntertainmentAudioRoomTeamupListView *avatarListView;
@property (retain, nonatomic) RichTextView *titleLabel;
@property (retain, nonatomic) UIView *authContainer;
@property (retain, nonatomic) WCFinderHeadImageView *avatorImageView;
@property (retain, nonatomic) RichTextView *nicknameTV;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *bgBlurImageView;
@property (retain, nonatomic) InfiniteLoopContainerView *notificationListView;
@property (retain, nonatomic) MMTimer *timer;
@property (weak, nonatomic) id<WCFinderLiveHomePageEntertainmentAudioRoomCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)onConnectMicButtonClicked;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)updateState;
- (void)playWithSound:(BOOL)a0;
- (void)stop;
- (void)onAuthorViewDidClick;
- (id)generateAvatarInfoList;
- (void)relayoutNickname;
- (void)layoutUI;
- (void)willDisplay;
- (void)didEndDisplay;
- (void)stopTimer;
- (void)startTimer;
- (void)changeToNextPage;
- (void)prepareForMorphTransition;
- (void)onEntertainmentAudioRoomStateUpdated;
- (void)onEntertainmentAudioRoomBackgroundImageUpdated;
- (void)onEntertainmentAudioRoomTalkingStatusUpdated;
- (void)onEntertainmentAudioRoomListStatusFlagUpdate:(id)a0;
- (unsigned long long)numberOfItemsInContainerView:(id)a0;
- (id)containerView:(id)a0 viewForItemAtIndex:(unsigned long long)a1;
- (void)onPlayEventRecvAnchorSEIInfo:(id)a0;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void)onTeamUpListClickUnoccupiedSeat;
- (void).cxx_destruct;

@end
