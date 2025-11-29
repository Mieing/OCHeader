@class NSObject;
@protocol MTLJSONSerializing;

@interface ACCTextModeComposerCameraCustomization : NSObject <AWEStudioCameraCustomization>

@property (copy, nonatomic) id /* block */ finishHandler;
@property (nonatomic) BOOL isSocialCamera;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
