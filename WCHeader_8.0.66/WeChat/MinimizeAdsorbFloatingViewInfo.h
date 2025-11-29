@class NSString;

@interface MinimizeAdsorbFloatingViewInfo : MMObject <PBCoding>

@property (nonatomic) double positionX;
@property (nonatomic) double positionY;
@property (retain, nonatomic) NSString *aggreSessionId;
@property (nonatomic) unsigned long long aggreSessionIdCreateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_positionX;
+ (void)PBArrayAdd_positionY;
+ (void)PBArrayAdd_aggreSessionId;
+ (void)PBArrayAdd_aggreSessionIdCreateTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
