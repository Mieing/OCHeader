@class NSString;

@interface AWEUserOrderFlowManager : HTSService <AWEUserOrderFlowManagerProtocol>

@property (nonatomic) BOOL hasRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)orderFlowStatusParamater;

@end
