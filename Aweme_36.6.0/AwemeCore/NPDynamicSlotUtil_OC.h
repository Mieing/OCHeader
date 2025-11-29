@interface NPDynamicSlotUtil_OC : NSObject

+ (id)getNonRecommendDynamicSlotInfosFromLVExtra:(id)a0 context:(id)a1;
+ (id)getNonRecommendDynamicSlotInfosFromSummary:(id)a0 context:(id)a1;
+ (id)getDynamicSlotInfosFromGenericTemplate:(id)a0;
+ (id)getNonRecommendDynamicSlotInfosFromGenericTemplate:(id)a0 context:(id)a1;
+ (id)getInfoStickerSlotInfosFromGenericTemplate:(id)a0;
+ (void)updateDynamicSlotFollowShootParams:(id)a0 followShootParams:(id)a1;
+ (id)getDynamicSlotInfosFromGenericTemplate:(id)a0 toTargetModel:(id)a1;
+ (id)getSegmentInfo:(id)a0;
+ (id)getDynamicSlotInfosFromSummary:(id)a0 recommend:(id)a1 toTargetModel:(id)a2;
+ (id)getDynamicSlotInfosFromLVExtra:(id)a0;
+ (id)getInfoStickerSlotInfosFromSummary:(id)a0;
+ (id)getDynamicSlotInfosFromSummary:(id)a0;
+ (id)getDynamicSlotInfosFromSummary:(id)a0 expectSlotCount:(unsigned long long)a1;
+ (BOOL)isContainedDynamicElement:(id)a0;

@end
