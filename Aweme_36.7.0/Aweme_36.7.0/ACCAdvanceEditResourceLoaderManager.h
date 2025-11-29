@class NSString, ACCAdvanceEditResourceInfoManager;

@interface ACCAdvanceEditResourceLoaderManager : NSObject <DVEResourceLoaderProtocol>

@property (retain, nonatomic) ACCAdvanceEditResourceInfoManager *resourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)transitionModelCategoryWithCompletion:(id /* block */)a0;
- (void)transitionModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
