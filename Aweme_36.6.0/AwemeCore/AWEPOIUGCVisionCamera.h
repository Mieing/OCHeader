@class AWEStorage, NSObject;
@protocol MTLJSONSerializing;

@interface AWEPOIUGCVisionCamera : NSObject <AWEStudioCameraCustomization>

@property (retain, nonatomic) AWEStorage *storage;
@property (copy, nonatomic) id /* block */ finishHandler;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (id)ratioStatusItem;
- (void)p_updateRecordConfig:(id)a0;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
