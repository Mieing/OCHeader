@class UIView, AWEVideoHintView, NSString, UIImageView, AWEStickerHintView, NSDictionary, CAKAlbumAssetModel, UILabel;

@interface AWERecorderTipsAndBubbleManager : NSObject <ACCDUXPopoverDelegate>

@property (retain, nonatomic) AWEVideoHintView *filterHint;
@property (retain, nonatomic) AWEVideoHintView *zoomScaleHintView;
@property (retain, nonatomic) UIView *musicBubble;
@property (retain, nonatomic) UIView *duetWithPropBubble;
@property (retain, nonatomic) AWEStickerHintView *propHintView;
@property (retain, nonatomic) AWEStickerHintView *propPhotoSensitiveView;
@property (copy, nonatomic) id /* block */ showMomentGuideAnimationCompletion;
@property (retain, nonatomic) UIView *albumNewContentBubbleView;
@property (retain, nonatomic) UIImageView *albumNewContentBubbleImageView;
@property (retain, nonatomic) UILabel *albumNewContentBubbleLabel;
@property (retain, nonatomic) UIView *albumNewContentBubble;
@property (retain, nonatomic) UIView *recognitionBubble;
@property (retain, nonatomic) CAKAlbumAssetModel *showingAssetModel;
@property (retain, nonatomic) NSString *albumNewContentBubbleType;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (nonatomic) long long actureRecordBtnMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (void)removeZoomScaleHintView;
- (void)updateFilterHintNewUIStyleSameWithEditPage;
- (BOOL)hasCameraAndMicroPhoneAuth;
- (void)removefilterHint;
- (void)createScaleHintView:(id)a0;
- (void)updateScaleHintViewWithAnimation:(BOOL)a0;
- (void)removeMusicBubble;
- (void)handleDuetGreenScreenPropHintViewWithEffectModel:(id)a0;
- (void)removePropHint;
- (void)removeDuetGreenScreenPropHintView;
- (void)propPhotoSensitiveViewAutoDismissAfterSecond:(long long)a0 dismissBlock:(id /* block */)a1;
- (void)p_showRecognitionBubbleForView:(id)a0 titleStr:(id)a1 contentStr:(id)a2 loopTimes:(long long)a3 completion:(id /* block */)a4;
- (void)shouldShowRecognitionBubble:(id)a0 completion:(id /* block */)a1;
- (void)removeRecognitionBubble:(BOOL)a0;
- (void)shouldShowRecognitionItemBubble:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldShowAddFeedMusicView;
- (void)removePropPhotoSensitive;
- (void)showFilterHintWithContainer:(id)a0 filterName:(id)a1 categoryName:(id)a2 centerInContainer:(id)a3;
- (void)showZoomScaleHintViewWithContainer:(id)a0 zoomScale:(double)a1 isGestureEnd:(BOOL)a2;
- (void)showMusicTimeBubbleWithPublishModel:(id)a0 forView:(id)a1 bubbleStr:(id)a2;
- (id)calculateCurrentTimeZoneDateFormatString;
- (void)showPropHintWithPublishModel:(id)a0 container:(id)a1 effect:(id)a2;
- (BOOL)isPropHintViewShowing;
- (void)showPropPhotoSensitiveWithContainer:(id)a0 effect:(id)a1 dismissBlock:(id /* block */)a2;
- (void)showRecognitionBubbleWithInputData:(id)a0 forView:(id)a1 titleStr:(id)a2 contentStr:(id)a3 loopTimes:(long long)a4 showedCallback:(id /* block */)a5;
- (void)showRecognitionBubbleForView:(id)a0 bubbleTitle:(id)a1 bubbleTipHint:(id)a2 completion:(id /* block */)a3;
- (void)showRecognitionPropHintBubble:(id)a0 forView:(id)a1 center:(struct CGPoint { double x0; double x1; })a2 completion:(id /* block */)a3;
- (void)removeBubbleAndHintIfNeeded;
- (BOOL)anyBubbleIsShowing;
- (void).cxx_destruct;
- (void)clearAll;
- (void)dismissWithOptions:(unsigned long long)a0;

@end
