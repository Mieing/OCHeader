@class MMFinderLiveNewCustomGiftStyleObj, MMLiveRewardGiftNewCustomizationEffectPreviewView, MMLiveRewardGiftNewCustomizationPriceDisplayView, MMLiveTaskId, MMFinderLiveTask, MMFinderLiveGiftNewCustomizationModel;

@interface MMLiveRewardGiftNewCustomizationEditLogic : NSObject

@property (retain, nonatomic) MMFinderLiveGiftNewCustomizationModel *customizationModel;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) MMFinderLiveNewCustomGiftStyleObj *currentSelectStyle;
@property (nonatomic) BOOL currEnableUseCustomText;
@property (weak, nonatomic) MMLiveRewardGiftNewCustomizationEffectPreviewView *effectPreviewView;
@property (weak, nonatomic) MMLiveRewardGiftNewCustomizationPriceDisplayView *priceDisplayView;
@property (copy, nonatomic) id /* block */ enableUseCustomTextAbilityChangeCallback;
@property (copy, nonatomic) id /* block */ giftNewCustomizationSelectChangeCallback;
@property (copy, nonatomic) id /* block */ currComponentKeyUpdateCallback;
@property (copy, nonatomic) id /* block */ selectStyleAutoChangeCallback;

- (id)initWithCustomizationModel:(id)a0 taskId:(id)a1;
- (void)initDefaultData;
- (void)configCustomizationCallbacks;
- (void)checkEnableUseCustomTextIsChange;
- (id)getCurrentSelectComponentKeyList;
- (void)updateCurrentSelectStyle:(id)a0;
- (void)autoChangeSelectStyle:(id)a0;
- (void)updateInputText:(id)a0;
- (void)commitCustomizationConfig:(id /* block */)a0;
- (void).cxx_destruct;

@end
