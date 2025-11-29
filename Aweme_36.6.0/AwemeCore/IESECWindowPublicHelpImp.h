@class NSString;

@interface IESECWindowPublicHelpImp : NSObject <IESECWindowPublicHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openGoodsGuideOnViewcontroller:(id)a0 entryPage:(id)a1 completionBlock:(id /* block */)a2;
+ (void)openMyOrdersPage;
+ (void)openShopReputationDetailPageWithSecAuthorId:(id)a0 enterSource:(id)a1 followStatus:(id)a2 authorId:(id)a3;
+ (id)profileOrdersTitle;
+ (void)shareWithShopOwner:(id)a0 onViewController:(id)a1;


@end
