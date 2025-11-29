@class NSString;

@interface IESLiveMediaExecutionBaseModule : IESLiveExecutionModule <IESLiveMediaExecutionBaseModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)executeForStage:(id)a0 withContext:(id)a1 params:(id)a2;

@end
