@class NSString, ArgusAspectVerifyHandler;

@interface ArgusBaseDelegate : NSObject <ArgusDelegateProtocol>

@property (copy, nonatomic) NSString *bizContainerId;
@property (readonly, nonatomic) ArgusAspectVerifyHandler *aspectCalculateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupAsepctVerifyHandler;
- (id)setupStrategyEngine;
- (void)injectBizService:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
