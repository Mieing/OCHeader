@class NSString;

@interface RecommendConfiguration : NSObject <PBCoding>

@property (nonatomic) double showTime;
@property (nonatomic) double showPercentage;
@property (nonatomic) double preLoadTime;
@property (nonatomic) double preLoadPercentage;
@property (copy, nonatomic) NSString *logic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_showTime;
+ (void)PBArrayAdd_showPercentage;
+ (void)PBArrayAdd_preLoadTime;
+ (void)PBArrayAdd_preLoadPercentage;
+ (void)PBArrayAdd_logic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
