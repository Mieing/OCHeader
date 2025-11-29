@class NSString, ACCCreationToolMediaTypeObject;
@protocol ACCBusinessTemplate, ACCRouterCoordinatorProtocol;

@interface AWECreativeToolsEditConfiguration : NSObject <ACCBusinessConfiguration>

@property (retain, nonatomic) id<ACCBusinessTemplate> businessTemplate;
@property (retain, nonatomic) id<ACCRouterCoordinatorProtocol> routerCoordinator;
@property (retain, nonatomic) ACCCreationToolMediaTypeObject *mediaType;
@property (retain, nonatomic) id inputData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)businessServiceContainerWithSessionContainer:(id)a0;
- (void)_configSequenceEditServiceWithInputData:(id)a0 serviceProvider:(id)a1;
- (BOOL)shouldUseOldImageAlbumEditor;
- (id)initWithInputData:(id)a0 designatedMediaType:(id)a1 featureConfigs:(id)a2 customizedComponents:(id)a3 customizedComponentPlugins:(id)a4;
- (void).cxx_destruct;

@end
