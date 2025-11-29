@class NSString;

@interface AWEStudioCoreTrackerImpl : NSObject <AWEStudioCoreTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackShootWithParameter:(id)a0;
- (void)trackShootWithParameter:(id)a0 context:(id)a1;
- (void)trackShootWithParameter:(id)a0 customInfo:(id)a1;
- (id)p_finalParameterWithParameter:(id)a0;
- (id)shootPreviousTabString;

@end
