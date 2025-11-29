@class AWEHPBottomTabUIConfigModel;
@protocol AWENormalModeTabBarInnerViewUIConfigProtocol, AWEHPBottomTabSpecialEntryModelProtocol;

@interface AWEHPTabBarButtonItemComponentContentModel : NSObject

@property (retain, nonatomic) id<AWEHPBottomTabSpecialEntryModelProtocol> styleModel;
@property (retain, nonatomic) AWEHPBottomTabUIConfigModel *tabUIConfig;
@property (retain, nonatomic) id<AWENormalModeTabBarInnerViewUIConfigProtocol> innerViewUIConfig;
@property (nonatomic) double initLightProgress;

- (void).cxx_destruct;

@end
