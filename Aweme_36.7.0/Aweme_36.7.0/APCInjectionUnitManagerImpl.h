@class NSString, APCCommonInjectionUnit, AWEVideoPublishViewModel;
@protocol APCParameterizedTrackService;

@interface APCInjectionUnitManagerImpl : NSObject <APCParameterizedInjectionUnitManagerPrivate>

@property (retain, nonatomic) APCCommonInjectionUnit *commonUnit;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (retain, nonatomic) id<APCParameterizedTrackService> trackPresetService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
