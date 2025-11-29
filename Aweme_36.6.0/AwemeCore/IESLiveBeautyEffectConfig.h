@class IESLiveRoomBeautyItem, NSArray, NSMutableDictionary, NSString, IESLiveGCDTimer, NSObject;
@protocol OS_dispatch_group, IESLiveEffectPlatformService, IESLiveRecoder;

@interface IESLiveBeautyEffectConfig : NSObject <IESLiveEffectModuleBeautyForAudienceService>

@property (retain, nonatomic) NSArray *beautyItems;
@property (retain, nonatomic) NSMutableDictionary *beautyListDict;
@property (retain, nonatomic) NSMutableDictionary *secondaryEffectDict;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (weak, nonatomic) id<IESLiveRecoder> camera;
@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (copy, nonatomic) id /* block */ delayTask;
@property (retain, nonatomic) NSMutableDictionary *originBeautyParams;
@property (copy, nonatomic) NSString *originMakeupItemIdentifer;
@property (copy, nonatomic) NSString *originMakeupFilterValue;
@property (copy, nonatomic) NSString *originMakeupValue;
@property (retain, nonatomic) NSMutableDictionary *seletctedChildBeautyItem;
@property (retain, nonatomic) IESLiveGCDTimer *trackTimer;
@property (nonatomic) unsigned long long beautyItemType;
@property (retain, nonatomic) IESLiveRoomBeautyItem *defaultSecondaryItem;
@property (copy, nonatomic) NSString *liveTypeStr;
@property (retain, nonatomic) NSString *beautyTemplateSelectedIdentifier;
@property (retain, nonatomic) NSMutableDictionary *childBeautyItems;
@property (retain, nonatomic) NSMutableDictionary *seletctedChildItem;
@property (retain, nonatomic) NSMutableDictionary *categoryItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)outputValueForItem:(id)a0;
- (double)normalizedValue:(double)a0 forItem:(id)a1;
- (void)updateBeautyItemsForInterfaceTextCompletion:(id /* block */)a0 resourceCompletion:(id /* block */)a1;
- (double)outputValueForItemForInterface:(id)a0;
- (void)updateTimeStampForItem:(id)a0 isSelected:(BOOL)a1;
- (void)updateItemsTextCompletion:(id /* block */)a0 resourceCompletion:(id /* block */)a1 itemType:(unsigned long long)a2;
- (id)panelNameForItemType:(unsigned long long)a0;
- (void)dealWithResponseModel:(id)a0 itemType:(unsigned long long)a1 TextCompletion:(id /* block */)a2 resourceCompletion:(id /* block */)a3;
- (id)getABGroupEffects:(id)a0 itemType:(unsigned long long)a1;
- (id)insertNoneMakeupItemIfNeededForItems:(id)a0 itemType:(unsigned long long)a1;
- (id)outputValueFormatForItem:(id)a0;
- (id)rememberedDictForItem:(id)a0;
- (void)downloadSecondaryEffects:(id /* block */)a0 resourceCompletion:(id /* block */)a1 withSelectedItem:(id)a2;
- (id)selectedMakeupItemIdentifer;
- (id)beautyItemForUniqueIdentifier:(id)a0;
- (void)downloadEffect:(id)a0 panel:(id)a1 completion:(id /* block */)a2;
- (id)getAllEffectsFromRsp:(id)a0 groupValue:(long long)a1;
- (id)getBeautyItemWithEffectModel:(id)a0 needABGroup:(BOOL)a1 groupValue:(long long)a2;
- (void)updateBeautyItemsTextCompletion:(id /* block */)a0 resourceCompletion:(id /* block */)a1;
- (long long)beautyValueForItem:(id)a0;
- (long long)unnormalizedOutputValueForItem:(id)a0;
- (void)downloadItemEffects:(id)a0 panel:(id)a1 completion:(id /* block */)a2;
- (id)getAbGroupCategory:(id)a0 abGroup:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
