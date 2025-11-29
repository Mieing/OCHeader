@class NSString;

@interface AWEFlowerRedpacketHelper : NSObject <ACCFlowerRedPacketHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)flowerRedPacketDefaultCouponSendCount;
+ (BOOL)isFlowerRedPacketActivityVideoType:(long long)a0;
+ (BOOL)isFlowerRedPacketActivityOn;
+ (id)normalRedpacketSettings;
+ (id)arrayConfigValueForKey:(id)a0 backupKey:(id)a1;
+ (id)stringConfigValueForKey:(id)a0 backupKey:(id)a1;
+ (long long)integerConfigValueForKey:(id)a0 backupKey:(id)a1;
+ (BOOL)showAccordingPersonal;
+ (id)redPacketName;
+ (void)p_showTipAlertWithDescription:(id)a0 actionBlock:(id /* block */)a1;
+ (void)p_doRollbackCouponOrderWithPublishModel:(id)a0 handler:(id /* block */)a1;
+ (void)p_doStatusCheckFlowWithPublishModel:(id)a0 handler:(id /* block */)a1;
+ (id)p_assetModelFromRedPacketInfo:(id)a0;
+ (BOOL)p_hasBindRedpcketDrafts:(id)a0;
+ (id)p_B2CNeedRollbackCouponDraftsFromDrafts:(id)a0;
+ (void)p_handleRollbackCouponRedpackDraftsIfNeedWithDrafts:(id)a0 callback:(id /* block */)a1;
+ (BOOL)p_isValidConfigValue:(id)a0 class:(Class)a1;
+ (BOOL)isFlowerRedPacketSupportflash;
+ (id)flowerRedPacketActivityPublishBtnTitle;
+ (id)redPacketFELynxSchemaURLString;
+ (long long)flowerRedPacketBarItemIndex;
+ (id)flowerRedPacketShootToast;
+ (id)pineappleEditRedpacketToast;
+ (id)pineappleBannedActivityVideoType;
+ (id)pineappleBannedShootWays;
+ (BOOL)pineappleGreatReversal;
+ (void)handleRedpacketDraftRecoverWithPublishModel:(id)a0 handler:(id /* block */)a1;
+ (BOOL)hasNeedAlertRedpackDrafts:(id)a0;
+ (void)alertDeleteRedpackDraftsWithDrafts:(id)a0 callback:(id /* block */)a1;


@end
