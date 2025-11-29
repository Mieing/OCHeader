@class AWEIMEditConfigModel, NSObject;
@protocol MTLJSONSerializing;

@interface AWEIMStudioEditCustomization : NSObject <AWEStudioCameraCustomization>

@property (retain, nonatomic) AWEIMEditConfigModel *IMEditConfig;
@property (retain, nonatomic) NSObject<MTLJSONSerializing> *scenarioDraftModel;

- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (id)customComponentWithClass:(Class)a0 config:(id)a1;
- (id)initWithIMEditConfig:(id)a0;
- (void)configEditBasicWithEditPageConfig:(id)a0;
- (void)configEditToolbarWithEditPageConfig:(id)a0;
- (void)configEditStickerWithEditPageConfig:(id)a0;
- (void)configEditFlowControlWithEditPageConfig:(id)a0;
- (id)editCustomComponens;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
