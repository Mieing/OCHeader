@interface AWEIMLiveFansGroupManager : NSObject

+ (void)checkAndAddLiveFansGroupInviteCardWithBizExtension:(id)a0 conversationID:(id)a1;
+ (void)fetchLiveAdminUidSetWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)liveHost;
+ (void)getLiveFansGroupShareModelsCacheWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLiveFansGroupInviteUidListWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLiveFansGroupShareModelsWithParams:(id)a0 completion:(id /* block */)a1;

@end
