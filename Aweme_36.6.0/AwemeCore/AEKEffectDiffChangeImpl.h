@class NSDictionary, NSString;

@interface AEKEffectDiffChangeImpl : NSObject <AEKEffectDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSDictionary *addFeature;
@property (copy, nonatomic) NSDictionary *removeFeature;
@property (copy, nonatomic) NSDictionary *updateFeature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
