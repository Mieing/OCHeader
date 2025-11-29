@class NSString;

@interface AWEFeedDoubleColumnRadicalAlert : NSObject <AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)alertIDForEvent:(id)a0;
- (long long)alertPriorityForEvent:(id)a0;
- (void)showWithContext:(id)a0 onClose:(id /* block */)a1;
- (void)trackGuideClickWithAweme:(id)a0 alertType:(long long)a1;
- (void)trackGuideShowWithAweme:(id)a0 alertType:(long long)a1;
- (void).cxx_destruct;

@end
