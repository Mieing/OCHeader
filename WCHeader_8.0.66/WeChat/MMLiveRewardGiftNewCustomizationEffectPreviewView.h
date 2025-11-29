@class UIView, MMLiveGiftMagicRewardHandler, MMFinderLiveRewardGiftItem, MMFinderLiveGiftNewCustomizationModel, MMLiveTask, MMLiveTaskId, CAGradientLayer, _TtC6WeChat15MagicRewardView;

@interface MMLiveRewardGiftNewCustomizationEffectPreviewView : UIView <WeChat.IMRViewResListener>

@property (retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMLiveTask *liveTask;
@property (retain, nonatomic) UIView *effectPreviewBackView;
@property (retain, nonatomic) CAGradientLayer *effectPreviewGradientLayer;
@property (retain, nonatomic) _TtC6WeChat15MagicRewardView *effectPreviewView;
@property (retain, nonatomic) MMLiveGiftMagicRewardHandler *magicRewardHandler;
@property (nonatomic) BOOL isViewAppear;
@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;

- (id)initWithGiftItem:(id)a0 taskId:(id)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)dealloc;
- (void)layoutEffectPreviewBackView;
- (void)createEffectPreviewGradientLayer;
- (void)updateEffectPreviewGradientLayer;
- (void)layoutEffectPreviewView;
- (void)configComponentValuesForEffectPreview;
- (void)onMagicRewardViewDisplayUpdate;
- (void)updateEffectPreviewViewAlpha:(double)a0;
- (void)updateKey:(id)a0 value:(id)a1;
- (void)onViewDidAppear;
- (void)onViewDidDisappear;
- (void)onResLoadedWithView:(id)a0;
- (void)onResUnloadedWithView:(id)a0;
- (void).cxx_destruct;

@end
