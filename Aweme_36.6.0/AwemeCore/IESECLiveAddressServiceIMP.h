@class NSString;

@interface IESECLiveAddressServiceIMP : NSObject <IESECLiveAddressService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAddressWithBtmHost:(id)a0;
+ (id)getDefaultBtmCode;
+ (id)getAddressWithBtmHost:(id)a0 btm:(id)a1;
+ (void)setAddressWithAddressID:(id)a0 addressType:(id)a1 addressStrategyType:(id)a2 completion:(id /* block */)a3;


@end
