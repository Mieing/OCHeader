@interface AWESECSampling : NSObject

+ (BOOL)hitSamplingWithRate:(unsigned long long)a0;
+ (BOOL)hitSamplingUsingTime:(unsigned long long)a0;
+ (BOOL)hitSamplingUsingRandom:(unsigned long long)a0;
+ (BOOL)hitSamplingWithRate:(unsigned long long)a0 usingMethod:(id)a1;

@end
