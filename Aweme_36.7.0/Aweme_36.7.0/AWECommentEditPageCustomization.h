@class AWECommentEditPageScenarioDraftModel;
@protocol AWECommentEditPageCustomizationInjectionProtocol;

@interface AWECommentEditPageCustomization : NSObject <AWEStudioCameraCustomization>

@property (retain, nonatomic) id<AWECommentEditPageCustomizationInjectionProtocol> injectionProtocol;
@property (retain, nonatomic) AWECommentEditPageScenarioDraftModel *scenarioDraftModel;
@property (copy, nonatomic) id /* block */ finishHandler;

- (id)initWithInjectionProtocol:(id)a0;
- (BOOL)isPublishFlow;
- (id)scenarioConfig;
- (id)createNewPageConfigIfNeededBeforeApplying:(id)a0 dataContext:(id)a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
