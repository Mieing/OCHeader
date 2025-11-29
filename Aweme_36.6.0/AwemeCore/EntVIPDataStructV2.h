@class NSMutableArray;

@interface EntVIPDataStructV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *entVipConfigsArray;
@property (readonly, nonatomic) unsigned long long entVipConfigsArray_Count;
@property (nonatomic) int chargeCount;
@property (nonatomic) BOOL hasChargeCount;

+ (id)descriptor;

@end
