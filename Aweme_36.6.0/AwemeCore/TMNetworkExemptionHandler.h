@class NSSet;

@interface TMNetworkExemptionHandler : NSObject

@property (copy, nonatomic) NSSet *pathExemptionList;
@property (copy, nonatomic) NSSet *hostExemptionList;
@property (nonatomic) BOOL enableTTNetPureModeFilter;

+ (id)sharedInstance;

- (void)updateConfig:(id)a0;
- (id)determineExemptionWithContext:(id)a0;
- (void).cxx_destruct;

@end
