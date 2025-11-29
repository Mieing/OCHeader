@class NSString;

@interface BDPWukongCloseBluetoothAdapterMethod : BDPWukongMethod <BDPWukongMethodImpl, BDPWukongMethodInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)paramModelClass;
+ (Class)resultModelClass;
+ (unsigned long long)pluginMode;
+ (id)bdpAPIInfo;

- (void)callWukongWithParam:(id)a0 instance:(id)a1 callback:(id /* block */)a2;

@end
