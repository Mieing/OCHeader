@class NSString;

@interface AWEECMallGurdUpdateListener : NSObject <IESGurdEventDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;
+ (id)mallLynxChannel;
+ (void)startGurdMallChannelUpdateListen;

- (void)gurdDidFinishApplyingPackageForAccessKey:(id)a0 channel:(id)a1 succeed:(BOOL)a2 error:(id)a3;
- (void)showDebugToast:(id)a0;

@end
