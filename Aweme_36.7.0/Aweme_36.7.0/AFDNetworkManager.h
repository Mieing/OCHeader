@class NSString;

@interface AFDNetworkManager : NSObject <AFDNetworkManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)transferToAwemeNormalWithAwemeModel:(id)a0 enterFrom:(id)a1 enterMethod:(id)a2;
+ (void)p_requestTurnToExchangeTypeWithAwemeID:(id)a0 exchangeType:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)requestMarkFriendsWithUserID:(id)a0 markFriendsRequestType:(unsigned long long)a1 completionBlock:(id /* block */)a2;


@end
