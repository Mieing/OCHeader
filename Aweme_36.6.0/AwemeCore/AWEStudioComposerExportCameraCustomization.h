@class NSString, NSObject;
@protocol MTLJSONSerializing;

@interface AWEStudioComposerExportCameraCustomization : NSObject <AWEStudioCameraCustomization>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (copy, nonatomic) id /* block */ updateScenarioConfigBlock;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
