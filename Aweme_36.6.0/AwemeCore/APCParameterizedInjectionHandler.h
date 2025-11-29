@class NSString, NSArray;
@protocol APCParameterizedInjectionUnitManagerPrivate, AWEStudioComposerCreationDataSetter;

@interface APCParameterizedInjectionHandler : APCBaseInjectionHandler <APCParameterizedInjectionHandlerProtocol>

@property (retain, nonatomic) id<APCParameterizedInjectionUnitManagerPrivate> injectionUnitManager;
@property (retain, nonatomic) id<AWEStudioComposerCreationDataSetter> creationDataSetter;
@property (copy, nonatomic) id /* block */ beforeTransition;
@property (copy, nonatomic) id /* block */ customTransition;
@property (nonatomic) BOOL disableLoading;
@property (copy, nonatomic) NSString *loadingTitle;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSArray *inputAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
