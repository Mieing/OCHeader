@class NSString;

@interface IESLLPOIDetailSyncFeedContainerPlugin : NSObject <IESLLPOIDetailContainerPlugin>

@property (copy, nonatomic) id /* block */ getPOIDetailContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSyncFeedExtension:(id)a0;
- (void)iesll_containerViewDidload;
- (void)iesll_registerAgents;
- (void)iesll_registerExtensions;
- (void).cxx_destruct;

@end
