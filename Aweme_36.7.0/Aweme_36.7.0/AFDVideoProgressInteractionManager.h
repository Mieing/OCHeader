@class AWEBigThumbModel, NSMutableDictionary, NSString, AWEAwemeModel, AFDVideoProgressInteractionView, AWEStoryProgressContainerView, UIImage;
@protocol AFDVideoProgressInteractionManagerDelegate;

@interface AFDVideoProgressInteractionManager : NSObject <AFDVideoProgressInteractionManagerProtocol>

@property (retain, nonatomic) AFDVideoProgressInteractionView *videoProgressInteractionView;
@property (retain, nonatomic) AWEStoryProgressContainerView *progressContainerView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) double duration;
@property (retain, nonatomic) NSMutableDictionary *bigImageDict;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (nonatomic) BOOL requestBigThumb;
@property (nonatomic) double slidingTime;
@property (nonatomic) double touchBeganOffsetX;
@property (nonatomic) double touchBeganProgress;
@property (weak, nonatomic) id<AFDVideoProgressInteractionManagerDelegate> delegate;
@property (nonatomic) BOOL isTrackActionDisabled;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isMultiView;
@property (nonatomic) BOOL isPanStillGuideViewHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)getBigThumbsWithIndex:(long long)a0 model:(id)a1 completion:(id /* block */)a2;

- (BOOL)shouldPreventPlay;
- (void)progressContainerViewValueChangedWithOffsetX:(double)a0;
- (void)pauseAlbumTimer:(BOOL)a0;
- (void)touchActionCancelled;
- (BOOL)isInPinchView;
- (double)currentProgressPercentage;
- (void)progressContainerViewTouchEndedWithPlayerController:(id)a0 playActionBlock:(id /* block */)a1 trackParams:(id)a2 needUsePlayer:(BOOL)a3;
- (void)updateWithProgressContainerView:(id)a0 model:(id)a1 duration:(double)a2;
- (void)progressContainerViewTouchBeganWithSuperview:(id)a0;
- (void)preloadPreviewImageWithModel:(id)a0;
- (void)resetPreviewImageCache;
- (void)dismissViews;
- (BOOL)isStoryAlbum;
- (BOOL)useCommonThumbnailLogic;
- (id)dashThumbInfo;
- (void)refreshPreviewImageWithBigImage:(id)a0;
- (BOOL)hasLvideoHighLightList;
- (BOOL)cancelActionIfMovedOutHotZone;
- (BOOL)canShowPreview;
- (void)updatePreviewImage;
- (void)loadPreviewWithCompletion:(id /* block */)a0 showPreviewImageView:(BOOL)a1;
- (void)updateLastLocation;
- (void)showPreviewByCommonLogicIfNeeded;
- (void)showPreviewImageIfNeeded;
- (BOOL)playStoryAlbum;
- (void)playVideoWithPlayerController:(id)a0 playActionBlock:(id /* block */)a1 duration:(double)a2;
- (BOOL)playAlbum;
- (void)cancelActionTrackWithParams:(id)a0;
- (void)trackActionWithParams:(id)a0;
- (void).cxx_destruct;
- (void)pause;
- (id)init;

@end
