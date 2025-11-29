@class MMFinderLiveWcPlayerView, NSString, UIImageView, MMFinderLiveTaskId, UIView, MMLiveResourceFetcherRootFlowAction, MMLiveAudioModeAnimatedBackgroundPlayerViewModel;

@interface MMFinderLiveConnectMicAudioOnlyAnchorView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) MMFinderLiveWcPlayerView *backgroundVideoView;
@property (copy, nonatomic) NSString *coverImageViewName;
@property (copy, nonatomic) NSString *backgroundVideoViewName;
@property (retain, nonatomic) UIView *shadingView;
@property (retain, nonatomic) MMFinderLiveTaskId *finderTaskId;
@property (retain, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) NSString *backgroundVideoUri;
@property (retain, nonatomic) MMLiveResourceFetcherRootFlowAction *downloadMgr;
@property (retain, nonatomic) MMLiveAudioModeAnimatedBackgroundPlayerViewModel *backgroundVideoViewModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } backgroundVideoViewNormalizedFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0 sdkUserId:(id)a1;
- (id)initWithTaskId:(id)a0 sdkUserId:(id)a1 coverImageViewName:(id)a2 backgroundVideoViewName:(id)a3;
- (void)configureCoverViewWithBackgroundConfiguration:(id)a0 fallbackImageUri:(id)a1;
- (void)layoutSubviews;
- (void)createBackgroundVideoView;
- (void)startAudioModeBackgroundPlayerWithPath:(id)a0;
- (void).cxx_destruct;

@end
