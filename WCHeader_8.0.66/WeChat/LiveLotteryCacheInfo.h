@class NSString;

@interface LiveLotteryCacheInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *lotteryId;
@property (nonatomic) unsigned int liveStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lotteryId;
+ (void)PBArrayAdd_liveStartTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
