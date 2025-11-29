@class NSString;

@interface IESLiveGameCPExplainBackendServiceImpl : NSObject <IESLiveGameCPExplainBackendService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)getExplainCardBackendDataWithCompletion:(id /* block */)a0;

@end
