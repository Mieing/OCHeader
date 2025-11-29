@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BDUGLuckyRouterReDispatchHelper : NSObject

@property (nonatomic) BOOL hasSDKStartup;
@property (nonatomic) BOOL hasUpdateSettings;
@property (retain, nonatomic) NSMutableArray *notHandledURLContextArray;
@property (retain) NSObject<OS_dispatch_queue> *reDispatchQueue;

+ (void)__tryReDispatch;
+ (BOOL)__isAppSettingsHasValue;
+ (void)sdkDidStartup;
+ (void)appSettingsUpdate;
+ (id)sharedInstance;

- (void)__trackerHandleContext:(id)a0 reason:(id)a1;
- (id)__renewCompletionForContext:(id)a0;
- (void)addNotHandledRouterContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
