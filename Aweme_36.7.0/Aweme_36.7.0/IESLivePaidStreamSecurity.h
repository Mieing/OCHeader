@class NSString, NSHashTable;
@protocol IESLiveSubscription, IESLivePaidSecurityDelegate;

@interface IESLivePaidStreamSecurity : NSObject <IESLivePaidSecurity>

@property (retain, nonatomic) NSHashTable *securityEventHandlers;
@property (retain, nonatomic) id<IESLiveSubscription> screenCaptureSubscription;
@property (weak, nonatomic) id banScreenCaptureAlert;
@property (weak, nonatomic) id<IESLivePaidSecurityDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)inScreenCaptured;
- (void)sendEventWillInstallSecurityType:(unsigned long long)a0;
- (void)sendEventWillStartScreenCaptured;
- (void)sendEventScreenCapturedDidChange:(BOOL)a0;
- (void)sendEventWillDisplayScreenCapturedAlert;
- (void)sendEventDidEndDisplayScreenCapturedAlert;
- (void)registerSecurityEventHandler:(id)a0;
- (void)unregisterSecurityEventHandler:(id)a0;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredSecurityEventHandlers;
- (BOOL)isScreenCaptured;
- (BOOL)verifyScreenCaptured;
- (void)uninstallSecurity:(unsigned long long)a0;
- (void)installSecurity:(unsigned long long)a0;
- (void)sendEventDidTakeScreenshot;
- (void)installSecurityScreenCapture;
- (void)installSecurityTakeScreenshot;
- (BOOL)enableAddObserverForScreenCapture;
- (void)takeScreenshotNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
