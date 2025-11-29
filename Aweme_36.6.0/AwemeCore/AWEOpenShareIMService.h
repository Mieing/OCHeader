@class NSString;

@interface AWEOpenShareIMService : HTSService <AWEOpenShareIMService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)joinIMGroupWithGroupID:(id)a0 clientKey:(id)a1 openID:(id)a2 completion:(id /* block */)a3;
+ (void)joinIMGroupWithGroupID:(id)a0 clientKey:(id)a1 openID:(id)a2 isHalfPage:(BOOL)a3 extraDict:(id)a4 completion:(id /* block */)a5;
+ (void)openChatPageWithCid:(id)a0 openID:(id)a1 clientKey:(id)a2 isHalfPage:(BOOL)a3 extraDict:(id)a4 completion:(id /* block */)a5;
+ (void)openAddGroupHalfPageWithDecodedGroupID:(id)a0 GroupID:(id)a1 ownerID:(id)a2 clientKey:(id)a3 groupType:(long long)a4 openID:(id)a5 extraDict:(id)a6 completion:(id /* block */)a7;
+ (void)openAddGroupFullPageWithDecodedGroupID:(id)a0 GroupID:(id)a1 ownerID:(id)a2 clientKey:(id)a3 groupType:(long long)a4 openID:(id)a5 extraDict:(id)a6 completion:(id /* block */)a7;
+ (void)trackEndWithClientKey:(id)a0 withParams:(id)a1;


@end
