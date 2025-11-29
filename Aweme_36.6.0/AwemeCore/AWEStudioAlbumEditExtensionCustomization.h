@class NSObject;
@protocol MTLJSONSerializing;

@interface AWEStudioAlbumEditExtensionCustomization : NSObject <AWEStudioCameraCustomization>

@property (copy, nonatomic) id /* block */ editPageConfigBlock;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
