@class NSString, WCAdConfirmHalfScreenAdapter;

@interface LiteAppJsApiAdRequestPhoneNumber : LiteAppJsApiAdBase <WCAdConfirmHalfScreenAdapterDelegate>

@property (retain, nonatomic) NSString *requestIcon;
@property (retain, nonatomic) NSString *requestName;
@property (retain, nonatomic) WCAdConfirmHalfScreenAdapter *phoneNumAdapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doAdInvokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)dealloc;
- (void)showAppointmentPhoneNumberRequestView;
- (void)confirmAdapterClosedWithResult:(long long)a0 extInfo:(id)a1;
- (void).cxx_destruct;

@end
