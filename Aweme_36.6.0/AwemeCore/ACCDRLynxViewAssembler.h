@class NSArray, ACCDRLynxView, AWEVideoPublishViewModel, UIViewController;
@protocol IESServiceRegister, IESServiceProvider, ACCDRViewControllerProtocol, ACCDRBusinessConfiguration;

@interface ACCDRLynxViewAssembler : NSObject

@property (retain, nonatomic) id<IESServiceRegister, IESServiceProvider> serviceContainer;
@property (retain, nonatomic) ACCDRLynxView *lynxView;
@property (copy, nonatomic) NSArray *xbridges;
@property (retain, nonatomic) id<ACCDRBusinessConfiguration> businessConfiguration;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) UIViewController<ACCDRViewControllerProtocol> *rootVC;

- (void)configServiceContainer;
- (void)bridgesBindService;
- (id)initWithDynamicRecordBusinessConfiguration:(id)a0 serviceContainer:(id)a1 rootVC:(id)a2 publishViewModel:(id)a3;
- (void)setupLynxViewOnView:(id)a0 lynxViewType:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
