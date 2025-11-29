@class NSString;

@interface IESECVideoMarketingServiceImpl : NSObject <IESECVideoMarketingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)triggerAnchorBenefitWithAwemeID:(id)a0 productId:(id)a1 authorId:(id)a2 enterFrom:(id)a3 actionType:(id)a4 actionFrom:(id)a5 benefitParams:(id)a6 completion:(id /* block */)a7;
+ (void)fetchBenefitInfoWithAwemeID:(id)a0 completion:(id /* block */)a1;
+ (void)trackAnchorRedPacketToastShowWithAwemeID:(id)a0 toastText:(id)a1 resultType:(id)a2 productID:(id)a3 authorID:(id)a4 actionType:(id)a5 actionFrom:(id)a6 enterFrom:(id)a7 benefitType:(id)a8 trackParams:(id)a9;
+ (void)handleBenefitToastWithAwemeID:(id)a0 productId:(id)a1 authorId:(id)a2 enterFrom:(id)a3 actionType:(id)a4 actionFrom:(id)a5 toastModel:(id)a6;
+ (void)requestBenefitInfoWithAwemeID:(id)a0 productId:(id)a1 authorId:(id)a2 enterFrom:(id)a3 benefitParam:(id)a4 completion:(id /* block */)a5;


@end
