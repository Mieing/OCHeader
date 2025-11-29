@class NSString;

@interface AWEDetailShimmerConfigurationImpl : NSObject <AWEDetailShimmerConfiguration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)shimmerDirection;
- (id)color;

@end
