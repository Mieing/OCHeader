@class NSString, AWEBinding, NSHashTable;
@protocol AWEPaidSecurityDelegate;

@interface AWEPaidStreamSecurity : NSObject <AWEPaidSecurityDelegate, AWEPaidSecurity>

@property (retain, nonatomic) NSHashTable *securityEventHandlers;
@property (retain, nonatomic) AWEBinding *screenCaptureBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEPaidSecurityDelegate> delegate;

- (BOOL)inScreenCaptured;
- (void)sendEventScreenCapturedDidChange:(BOOL)a0;
- (void)registerSecurityEventHandler:(id)a0;
- (void)uninstallSecurity;
- (void)unregisterSecurityEventHandler:(id)a0;
- (void)installSecurity;
- (void)sendEventToHandlers:(SEL)a0 event:(id /* block */)a1;
- (id)registeredSecurityEventHandlers;
- (BOOL)isScreenCaptured;
- (BOOL)verifyScreenCaptured;
- (void).cxx_destruct;
- (id)init;

@end
