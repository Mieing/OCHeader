@class HTSEventContext, NSMutableDictionary, NSString;

@interface IESLiveBeautyTrackImp : NSObject <IESLiveBeautyTrackService>

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) NSMutableDictionary *effectiveUseTimerMap;
@property (retain, nonatomic) NSMutableDictionary *selectTimerMap;
@property (retain, nonatomic) NSMutableDictionary *trackItemMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (id)initWithTrackContext:(id)a0;
- (void)trackWithEvent:(id)a0 params:(id)a1;
- (void)clearAllTimer;
- (void)trackBeautyItemSelectAndEffectiveUseWithItem:(id)a0 itemList:(id)a1 type:(unsigned long long)a2 takeDefault:(BOOL)a3 extraParams:(id)a4;
- (void)cancelBeforeDelayBeautyTaskWith:(id)a0 itemList:(id)a1 type:(unsigned long long)a2;
- (void)reportUseTimeForAllItem;
- (void)reportUseTimeForItem:(id)a0 beautyType:(unsigned long long)a1;
- (void)updateTrackContext:(id)a0;
- (long long)unNormalizedOutputValueForItem:(id)a0;
- (BOOL)isAudience;
- (void)createTrackTaskWithItem:(id)a0 type:(unsigned long long)a1 takeDefault:(BOOL)a2 extraParams:(id)a3;
- (void)clearTimerIfNeedWithIdentifier:(id)a0;
- (BOOL)shouldRecordWithItem:(id)a0 type:(unsigned long long)a1;
- (BOOL)shouldTrackEffectiveUseWithTypeWithtype:(unsigned long long)a0;
- (void)reportWithBeautyItem:(id)a0 beautyType:(unsigned long long)a1 takeDefault:(BOOL)a2 trackType:(unsigned long long)a3 extraParams:(id)a4;
- (BOOL)shouldTrackUseTimeWithTypeWithtype:(unsigned long long)a0;
- (void)recordStartUseWithItem:(id)a0 takeDefault:(BOOL)a1 type:(unsigned long long)a2;
- (id)getAppearanceParamsWithItem:(id)a0;
- (id)getMakeupParamsWithItem:(id)a0;
- (id)getFilterParamsWithItem:(id)a0;
- (id)getBodyParamsWithItem:(id)a0;
- (id)getVideoAdjustParamsWithItem:(id)a0;
- (id)getCameraMovementParamsWithItem:(id)a0;
- (void)reportUseTimeWithRecordItem:(id)a0;
- (void)removeRecordSelectWithUniqueID:(id)a0;
- (long long)getOutputValueForItem:(id)a0 type:(unsigned long long)a1;
- (id)makeupTrackParamsForItem:(id)a0 isGetDefault:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
