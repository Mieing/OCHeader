@class NSString;

@interface WCPayOpenApiAppCommand : NSObject <WCPayOpenApiMatcher>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)matchApi:(id)a0;

@end
