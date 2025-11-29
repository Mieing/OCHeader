@interface IESECWindowHelper : NSObject

+ (void)enterShopWithRequest:(id)a0;
+ (id)decodeJsonString:(id)a0;
+ (void)enterMyShopWithItemID:(id)a0 refer:(id)a1 entranceLocation:(id)a2 shopEnterMethod:(id)a3 whichAccount:(id)a4 extraData:(id)a5 taskBanner:(id)a6 splitBlocks:(id)a7;
+ (void)enterShopWithShopOwner:(id)a0 itemID:(id)a1 refer:(id)a2 entranceLocation:(id)a3 enterMethod:(id)a4 whichAccount:(id)a5 extraData:(id)a6 taskBanner:(id)a7 splitBlocks:(id)a8;
+ (void)enterNativeShopWithShopOwner:(id)a0 itemID:(id)a1 refer:(id)a2 entranceLocation:(id)a3 enterMethod:(id)a4 whichAccount:(id)a5 extraData:(id)a6 taskBanner:(id)a7 splitBlocks:(id)a8;

@end
