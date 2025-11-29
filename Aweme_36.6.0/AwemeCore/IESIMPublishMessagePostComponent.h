@class NSString, IESIMPublishMessageImageGenerationVideoTask, DUXLoadingToast;

@interface IESIMPublishMessagePostComponent : AWEIMComponentBase <IESIMPublishMessagePostComponentInterface>

@property (retain, nonatomic) IESIMPublishMessageImageGenerationVideoTask *imageGenerationVideoTask;
@property (retain, nonatomic) DUXLoadingToast *loadingView;
@property (copy, nonatomic) NSString *createID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)transVideoWithImage:(id)a0 view:(id)a1 publishInfo:(id)a2;
- (void)enterEdit:(id)a0;
- (BOOL)p_userDidCancel:(id)a0;
- (id)p_generationVideoWithImage:(id)a0 processCallback:(id /* block */)a1 successCallback:(id /* block */)a2 failCallback:(id /* block */)a3;
- (void)p_launchVideoEditWithPublishInfo:(id)a0 requestParams:(id)a1 prepareEditCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)publishID;

@end
