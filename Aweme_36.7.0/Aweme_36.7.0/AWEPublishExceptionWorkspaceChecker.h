@class NSString, AWEPublishExceptionWorkspaceContext, AWEVideoPublishViewModel;

@interface AWEPublishExceptionWorkspaceChecker : NSObject <AWEPublishExceptionCheckerProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) AWEPublishExceptionWorkspaceContext *worksapceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkWithPublishModel:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (id)reportCustomParams;
- (void).cxx_destruct;

@end
