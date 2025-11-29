@interface LVKeyframeHelper : NSObject

+ (id)genVolumeKeyframeParamsString:(id)a0;
+ (id)genFilterKeyframeJsonString:(id)a0;
+ (id)genPartFilterKeyframeJsonString:(id)a0;
+ (id)genTextKeyframeJsonString:(id)a0 onSegment:(id)a1;
+ (id)genStickerKeyframeJsonString:(id)a0 onSegment:(id)a1;
+ (unsigned long long)transformSourceTimeToTargetTime:(unsigned long long)a0 onSegment:(id)a1;
+ (unsigned long long)transformTargetTimeToResourceTime:(unsigned long long)a0 onSegment:(id)a1;
+ (id)genAdjustKeyframeJsonString:(id)a0 payloadType:(unsigned long long)a1;
+ (id)genPartAdjustKeyframeJsonString:(id)a0 payloadType:(unsigned long long)a1;

@end
