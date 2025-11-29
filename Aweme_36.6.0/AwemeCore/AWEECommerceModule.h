@class NSDictionary, NSString;

@interface AWEECommerceModule : NSObject <HTSAppLifeCycle>

@property (nonatomic) BOOL isOpenFromOtherApp;
@property (nonatomic) BOOL isOpenOtherApp;
@property (retain, nonatomic) NSDictionary *trackParamForOpenOtherApp;
@property (nonatomic) double openAppRecordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ecommerceModule;
+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;
- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (void)resetParam;
- (BOOL)canHandleLiveActivity;
- (void).cxx_destruct;

@end
