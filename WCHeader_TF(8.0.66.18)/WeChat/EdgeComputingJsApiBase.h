@class NSString;

@interface EdgeComputingJsApiBase : NSObject <IEdgeComputingJsApiProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)registerIntoContext:(id)a0;
- (id)invoke:(id)a0;
- (id)logic:(id)a0;
- (id)functionName;
- (unsigned int)getType;
- (void)clear;

@end
