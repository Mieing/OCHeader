@class NSString, UIView;
@protocol AWEFeedAutoPlayFloatingButtonProtocol;

@interface AWEPadFeedAutoPlayServiceImp : NSObject <AWEPadFeedAutoPlayService>

@property (nonatomic) long long autoPlayUIType;
@property (nonatomic) BOOL longPressSwitchEnable;
@property (nonatomic) BOOL allFeedEnable;
@property (weak, nonatomic) UIView<AWEFeedAutoPlayFloatingButtonProtocol> *autoPlayBtn;
@property (nonatomic) long long autoPlayOptimizationStyle;
@property (nonatomic) BOOL didUpdateAutoPlayStateOfCompilationPlay;
@property (nonatomic) long long autoPlayStateOfCompilationPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultAutoPlayConfig;
+ (id)defaultAutoPlayV2Config;
+ (BOOL)autoPlayFeatureEnable;
+ (id)sharedInstance;

- (id)autoPlayManagerFactory;
- (BOOL)enableAutoPlayOptimization;
- (void)performAddAutoPlayFloatingBtnController:(id /* block */)a0;
- (BOOL)shouldUpdateAutoPlayStateAfterLeaveCompilationPlay;
- (id)createAutoPlayFloatingButton;
- (void)performAddLongPressSwitch:(id /* block */)a0;
- (void)performAddAutoPlayControlBarElement:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
