@class AWETeenPlayInteractionContext, NSHashTable, UIImage, AWEAwemeModel, UITapGestureRecognizer, NSString, AWEBigThumbModel, UIPanGestureRecognizer;
@protocol AWETeenPlayInteractionProgressHelperDelegate;

@interface AWETeenPlayInteractionProgressHelper : NSObject <UIGestureRecognizerDelegate, AWETeenModePlayerProgressSliderDelegate>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSHashTable *sliderArray;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) double progress;
@property (retain, nonatomic) AWEBigThumbModel *dashThumbModel;
@property (retain, nonatomic) UIImage *engineBigImage;
@property (nonatomic) BOOL isRequestBigThumb;
@property (weak, nonatomic) id<AWETeenPlayInteractionProgressHelperDelegate> delegate;
@property (weak, nonatomic) AWETeenPlayInteractionContext *context;
@property (nonatomic) BOOL previewable;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)progressSliderValueChanged:(id)a0;
- (BOOL)useCommonThumbnailLogic;
- (void)refreshPreviewImageWithBigImage:(id)a0;
- (void)addPanGestureForView:(id)a0;
- (void)setProgressIfNeeded:(double)a0;
- (void)setPlayableProgress:(double)a0;
- (id)createProgressSlider;
- (void)progressSliderSingleTapped:(id)a0;
- (void)p_preDownloadPreviewImageIfNeeded;
- (void)progressScreenPanGesture:(id)a0;
- (void)p_progressPanSeekBegin;
- (void)p_progressPanSeekEnd:(double)a0;
- (void)p_progressTapSeek:(double)a0;
- (double)p_screenSeekFactor;
- (void)p_trackerWithSeekType:(unsigned long long)a0;
- (void)p_performSelectorBlock:(id /* block */)a0;
- (void)p_seekWithProgress:(double)a0 seekType:(unsigned long long)a1;
- (void)p_fetchBigThumbByTokenAuth;
- (void)p_previewImageDownloadMonitor:(BOOL)a0 duration:(double)a1 error:(id)a2 index:(long long)a3;
- (void)p_fetchPreviewImageIndex:(long long)a0 completion:(id /* block */)a1;
- (void)p_refreshPreviewImage;
- (id)p_currentDurationStringWithProgress:(double)a0;
- (id)p_totalDurationString;
- (void)progressSliderTouchBegan:(id)a0;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setData:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)reset;
- (void)removeObserver:(id)a0;

@end
