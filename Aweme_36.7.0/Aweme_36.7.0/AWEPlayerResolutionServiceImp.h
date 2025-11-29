@class NSString;
@protocol AWEPlayerResolutionManagerProtocol;

@interface AWEPlayerResolutionServiceImp : NSObject <AWEPlayerResolutionService>

@property (retain, nonatomic) id<AWEPlayerResolutionManagerProtocol> resolutionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionConfig;
+ (BOOL)enableChangePreloadResolutionWithEnterFrom:(id)a0 inLandscape:(BOOL)a1;
+ (BOOL)shouldShowResolutionWhenVertical:(BOOL)a0 model:(id)a1 enterFrom:(id)a2;
+ (long long)recordDays;
+ (id)supportAwemeTypeList;
+ (id)supportPageListWhenVertical:(BOOL)a0;
+ (id)titleForManualGearTypes:(unsigned long long)a0;
+ (id)getCommonTrackParamsWithVideoDelegate:(id)a0 enterFrom:(id)a1;
+ (unsigned long long)trackNumberWithGearTypes:(unsigned long long)a0;
+ (void)manualSelectResolution:(unsigned long long)a0 videoDelegate:(id)a1 enterFrom:(id)a2;
+ (long long)blockMaxCount;
+ (double)blockMaxTime;
+ (id)adjustLongPressResolutionItemIfNeeded:(id)a0;
+ (id)showBottomNotificationWithVideoDelegate:(id)a0 enterFrom:(id)a1;

- (void).cxx_destruct;
- (id)init;

@end
