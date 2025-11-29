@class NSDictionary, NSString;

@interface AEKFilterDiffChangeImpl : NSObject <AEKFilterDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (retain, nonatomic) NSDictionary *addIntensity;
@property (retain, nonatomic) NSDictionary *updateIntensity;
@property (retain, nonatomic) NSDictionary *removeIntensity;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
