@class NSMutableArray;

@interface EntertainmentVideoPaidWayV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *paidWaysArray;
@property (readonly, nonatomic) unsigned long long paidWaysArray_Count;
@property (nonatomic) int paidType;
@property (nonatomic) BOOL hasPaidType;
@property (nonatomic) BOOL enableUseNewEntData;
@property (nonatomic) BOOL hasEnableUseNewEntData;

+ (id)descriptor;

- (BOOL)enableUseNewEntData;
- (int)paidType;

@end
