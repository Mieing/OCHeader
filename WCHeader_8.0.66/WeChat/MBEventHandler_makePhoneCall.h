@class NSString;

@interface MBEventHandler_makePhoneCall : MBEventHandlerBaseAsync <WCActionSheetDelegate>

@property (retain, nonatomic) NSString *number;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
