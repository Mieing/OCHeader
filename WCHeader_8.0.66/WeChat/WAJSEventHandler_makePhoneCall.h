@class NSString;

@interface WAJSEventHandler_makePhoneCall : WAJSEventHandler_BaseEvent <WCActionSheetDelegate>

@property (retain, nonatomic) NSString *number;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
