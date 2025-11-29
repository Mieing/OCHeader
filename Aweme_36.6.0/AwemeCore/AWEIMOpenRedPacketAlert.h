@class NSString, AWEIMOpenRedPacketAlertContext;

@interface AWEIMOpenRedPacketAlert : NSObject <AWEAlertProtocol>

@property (retain, nonatomic) AWEIMOpenRedPacketAlertContext *context;
@property (copy, nonatomic) id /* block */ pendingCloseCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (BOOL)canShowWithContext:(id)a0;
- (double)showTimeoutWithContext:(id)a0;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)__log:(id)a0;
- (void)didClose:(BOOL)a0;
- (id)initWithContetxt:(id)a0;
- (void).cxx_destruct;
- (void)show;

@end
