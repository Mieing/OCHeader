@class NSString;

@interface AWELiveUserFlowServiceIMP : NSObject <IESLiveUserFlowService>

@property (nonatomic) BOOL hasRequested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOrderAndUnExcessFlow;
- (void)checkIfUserFreeOfFlow:(id /* block */)a0;

@end
