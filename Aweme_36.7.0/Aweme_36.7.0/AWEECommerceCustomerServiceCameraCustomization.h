@class NSObject;
@protocol MTLJSONSerializing;

@interface AWEECommerceCustomerServiceCameraCustomization : NSObject <AWEStudioFlyBirdCameraCustomization> {
    NSObject<MTLJSONSerializing> *scenarioDraftModel;
}

@property (nonatomic) int maxChooseVideoTime;
@property (copy, nonatomic) id /* block */ finishHandler;

- (void)setScenarioDraftModel:(id)a0;
- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (id)scenarioDraftModel;
- (void)p_resetEditConfig:(id)a0 albumEditContext:(id)a1;
- (id)initWithMaxChooseVideoTime:(int)a0;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
