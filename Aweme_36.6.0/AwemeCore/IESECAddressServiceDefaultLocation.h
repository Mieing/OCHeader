@class NSString;

@interface IESECAddressServiceDefaultLocation : NSObject <IESECLocationService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getLocationMockViewController;
+ (void)requestCurrentLocation:(long long)a0 completion:(id /* block */)a1;
+ (BOOL)hasPermission;


@end
