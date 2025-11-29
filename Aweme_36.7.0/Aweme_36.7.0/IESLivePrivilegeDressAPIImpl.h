@class NSString;

@interface IESLivePrivilegeDressAPIImpl : NSObject <IESLivePrivilegeDressAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchDressListWithVersion:(id)a0 roomID:(id)a1 dressIDs:(id)a2 completion:(id /* block */)a3;
- (void)buyDressFormGiftPanel:(id)a0 roomID:(id)a1 anchorID:(id)a2 completion:(id /* block */)a3;
- (void)ts_buyDressFormGiftPanel:(long long)a0 consumeScene:(long long)a1 error:(id)a2 duration:(double)a3;

@end
