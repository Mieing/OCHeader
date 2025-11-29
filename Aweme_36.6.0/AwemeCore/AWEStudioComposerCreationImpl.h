@class NSString, NSNumber;
@protocol UIViewControllerTransitioningDelegate;

@interface AWEStudioComposerCreationImpl : NSObject <AWEStudioComposerCreation>

@property (readonly, nonatomic) id /* block */ injectService;
@property (nonatomic) BOOL didStart;
@property (readonly, nonatomic) NSString *generatedDraftID;
@property (readonly, nonatomic) NSString *creationID;
@property (copy, nonatomic) id /* block */ prepareCompletion;
@property (copy, nonatomic) NSNumber *disableComposerLoadingView;
@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> customTransitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithComposerModel:(id)a0 cameraCustomization:(id)a1 prepareCompletion:(id /* block */)a2;
- (void)startWithComposerModel:(id)a0;
- (void)startWithComposerModel:(id)a0 cameraCustomization:(id)a1;
- (void)deprecated_setInjectService:(id /* block */)a0;
- (void)safe_resetComposerCreationID:(id)a0;
- (void)generateDraftIDManually;
- (id)composerDraftFolder;
- (void).cxx_destruct;
- (id)init;

@end
