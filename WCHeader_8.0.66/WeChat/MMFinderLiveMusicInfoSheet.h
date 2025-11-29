@class MMUILabel, MMUIImageView, NSString, MMFinderLiveTaskId, TingSharedAudioView, MMUIView, MMFinderLiveMusicDataItem;
@protocol MMFinderLiveMusicInfoSheetDelegate;

@interface MMFinderLiveMusicInfoSheet : MMPageSheetBaseView <MMImageLoaderObserver>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (weak, nonatomic) id<MMFinderLiveMusicInfoSheetDelegate> delegate;
@property (retain, nonatomic) MMFinderLiveMusicDataItem *dataItem;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) TingSharedAudioView *audioContentView;
@property (retain, nonatomic) MMUIView *qqMusicTipsViewContainer;
@property (retain, nonatomic) MMUIImageView *qqMusicTipsLogoIcon;
@property (retain, nonatomic) MMUIImageView *qqMusicTipsArrowIcon;
@property (retain, nonatomic) MMUILabel *qqMusicTipsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showWithTaskId:(id)a0 dataItem:(id)a1 delegate:(id)a2;

- (id)initWithTaskId:(id)a0 dataItem:(id)a1 delegate:(id)a2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutQQMusicTipsViewContainer;
- (void)setupPageSheetConfig;
- (double)contentWidth;
- (double)contentViewHeight;
- (void)onTapAudioContentView;
- (void)onTapQQMusicTipsView;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)reloadData;
- (void)reloadMusicItem:(id)a0;
- (id)getBriefMusicInfo;
- (void)pageSheetDidAppear;
- (void)pageSheetDidDisappear;
- (id)liveTask;
- (id)tingItemForAudioContentView;
- (void).cxx_destruct;

@end
