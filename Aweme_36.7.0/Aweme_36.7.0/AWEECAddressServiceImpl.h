@class NSString;

@interface AWEECAddressServiceImpl : NSObject <AWEECAddressService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAddressWithBtmHost:(id)a0 curPageBtm:(id)a1 addressType:(long long)a2;
+ (id)addEcAddressDataInSchema:(id)a0;
+ (id)getAddressUpdateDialogConfig;
+ (void)setAddress:(id)a0 sourceType:(unsigned long long)a1 isSession:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
+ (void)showAddressUpdateDialog:(id)a0;
+ (void)updateAddress:(id)a0 action:(id)a1 completion:(id /* block */)a2;


@end
