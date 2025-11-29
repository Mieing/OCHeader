@class NSString, AWEVideoPublishViewModel;
@protocol APCParameterizedInjectionUnitManagerPrivate;

@interface APCBaseInjectionUnit : NSObject <APCParameterizedInjectionUnit>

@property (weak, nonatomic) id<APCParameterizedInjectionUnitManagerPrivate> weakManager;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackPresetService;
- (void).cxx_destruct;

@end
