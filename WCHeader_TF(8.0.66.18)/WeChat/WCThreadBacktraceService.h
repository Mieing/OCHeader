@class NSString;

@interface WCThreadBacktraceService : MMRootService <MMServiceProtocol>

@property (nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
