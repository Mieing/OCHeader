@class NSString;

@interface AWELuckySDKAdapterCommonAdapter : NSObject <AWELuckySDKAdapterCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSpecialMode;
+ (id)addtionalURLSchems;
+ (BOOL)useTimerTaskAdapter;
+ (BOOL)useMotionAdapter;
+ (BOOL)useTabAdapter;
+ (id)tabTaskSchema;
+ (void)luckyCatPlayVideoParams:(id)a0 completionWithErrorInfo:(id /* block */)a1;
+ (void)luckyCatAliAuth:(id)a0 completionBlock:(id /* block */)a1;
+ (Class)weakTargetClass;
+ (void)setFeedCommentShowing:(BOOL)a0;
+ (void)registerBridge;
+ (BOOL)canShowPopup;
+ (void)startLuckyDogTimerTaskPendantAdapter;
+ (id)userID;
+ (id)appStoreUrl;

- (id)weakTarget;

@end
