@class NSString;

@interface MJVocalAdjustmentParamsModel : NSObject <PBCoding>

@property (nonatomic) double loudness;
@property (nonatomic) double duration;
@property (nonatomic) double defaultLoudness;
@property (nonatomic) double minLoudness;
@property (nonatomic) double maxLoudness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_loudness;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_defaultLoudness;
+ (void)PBArrayAdd_minLoudness;
+ (void)PBArrayAdd_maxLoudness;
+ (void)initialize;
+ (id)modelWithVocalAdjustmentParams:(id)a0;

- (id)getPBPropertyTable;
- (id)toVocalAdjustmentParams;

@end
