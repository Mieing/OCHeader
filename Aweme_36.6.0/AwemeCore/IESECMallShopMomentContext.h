@class IESECMallShopMomentViewModel, IESECListKitBFFViewController, NSDictionary, IESECMallShopMomentPerfInfo, NSString, UIViewController;
@protocol IESECMallChannelConfigProtocol;

@interface IESECMallShopMomentContext : NSObject

@property (copy, nonatomic) NSDictionary *momentConfig;
@property (nonatomic) unsigned long long geckoVersion;
@property (retain, nonatomic) IESECMallShopMomentPerfInfo *perfInfo;
@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) IESECMallShopMomentViewModel *viewModel;
@property (weak, nonatomic) IESECListKitBFFViewController *listVC;
@property (retain, nonatomic) id<IESECMallChannelConfigProtocol> mallConfig;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSDictionary *themeInfo;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *btmAB;

- (void)setupStyle;
- (void).cxx_destruct;
- (id)init;

@end
