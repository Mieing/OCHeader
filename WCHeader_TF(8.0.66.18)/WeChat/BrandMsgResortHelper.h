@interface BrandMsgResortHelper : NSObject

+ (BOOL)isOutsideResortScene:(unsigned long long)a0;
+ (BOOL)isInsideResortScene:(unsigned long long)a0;
+ (unsigned int)debugSwitchForceResortForScene:(unsigned long long)a0;
+ (id)genBizMsgItemFromMsgWrap:(id)a0 maxGroupId:(unsigned int)a1;

@end
