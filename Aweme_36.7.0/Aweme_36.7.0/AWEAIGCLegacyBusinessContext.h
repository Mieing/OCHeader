@class ACCAIGCSaveDraftServiceImpl, ACCAIGCAfterProcessModel, ACCLoraSyncViewModel, AWEVideoPublishViewModel, ACCAIGCMultiModalProduct, ACCAIGCEffectViewModel, ACCAIGCEffectComponent, ACCAIGCAIProcessViewModel, ACCSideslipAIGCEffectViewController;
@protocol IESServiceProvider;

@interface AWEAIGCLegacyBusinessContext : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCAIGCAfterProcessModel *afterProcessModel;
@property (retain, nonatomic) ACCLoraSyncViewModel *loraSyncViewModel;
@property (weak, nonatomic) ACCAIGCEffectComponent *aigcEffectComponent;
@property (weak, nonatomic) ACCSideslipAIGCEffectViewController *AIGCEffectVC;
@property (weak, nonatomic) ACCAIGCEffectViewModel *aigcEffectViewModel;
@property (weak, nonatomic) ACCAIGCAIProcessViewModel *aiProcessViewModel;
@property (weak, nonatomic) ACCAIGCSaveDraftServiceImpl *aigcDraftService;
@property (weak, nonatomic) ACCAIGCMultiModalProduct *multiModalProduct;

- (id)initWithRepository:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;

@end
