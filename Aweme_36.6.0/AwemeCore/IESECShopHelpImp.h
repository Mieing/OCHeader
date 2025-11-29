@class NSString;

@interface IESECShopHelpImp : NSObject <IESECShopHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openMyOrdersPage;
+ (id)profileOrdersTitle;
+ (void)shareWithShopContext:(id)a0 onViewController:(id)a1;
+ (id)getShopLiveRoomProfileView:(id)a0;
+ (id)getShopLiveRoomBackView:(id)a0;
+ (id)getShopLiveRoomTipsView:(id)a0;
+ (id)getShopLiveRoomAccessServiceManager:(id)a0;
+ (BOOL)isSaas;
+ (BOOL)openSaasShopDetail;


@end
