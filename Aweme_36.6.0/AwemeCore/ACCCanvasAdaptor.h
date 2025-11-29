@class NSString;
@protocol UIViewControllerTransitioningDelegate;

@interface ACCCanvasAdaptor : NSObject <UINavigationControllerDelegate>

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> nextTranslationTransitionDelegate;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ enableAnimated;
@property (copy, nonatomic) id /* block */ customerTransitioningSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aACCMidVideoCreationProtocolClass;

- (void)openPublishPageWithWithPublishViewModel:(id)a0 withLoadingView:(id)a1 completion:(id /* block */)a2;
- (void)openEditorWithPublishViewModel:(id)a0 withLoadingView:(id)a1 scene:(id)a2 completion:(id /* block */)a3;
- (id)aACCMidVideoCreationProtocol;
- (void)openEditorWithPublishViewModel:(id)a0 withLoadingView:(id)a1 inputDataBuilder:(id /* block */)a2 completion:(id /* block */)a3;
- (void)openEditorWithPublishViewModel:(id)a0 withLoadingView:(id)a1 inputDataBuilder:(id /* block */)a2 scene:(id)a3 completion:(id /* block */)a4;
- (id)p_createPublishPageWithPublishViewModel:(id)a0;
- (id)p_createJxPublishPagePublishModel:(id)a0;
- (void)openEditorWithPublishViewModel:(id)a0 withLoadingView:(id)a1 completion:(id /* block */)a2;
- (void)openJxPublishPageWithWithPublishViewModel:(id)a0 withLoadingView:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
