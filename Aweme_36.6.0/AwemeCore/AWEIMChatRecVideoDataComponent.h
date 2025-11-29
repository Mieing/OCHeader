@class NSArray, NSMutableDictionary, NSMutableSet, NSString, AWEIMChatRecommendVideoResponseModel;

@interface AWEIMChatRecVideoDataComponent : AWEIMComponentBase <AWEIMChatRecVideoDataInterface>

@property (retain, nonatomic) NSMutableSet *sentItemIDs;
@property (retain, nonatomic) NSMutableDictionary *itemMap;
@property (retain, nonatomic) NSArray *awemeModels;
@property (retain, nonatomic) AWEIMChatRecommendVideoResponseModel *resModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)requestDataWithCompletion:(id /* block */)a0;
- (void)sendAwemeModel:(id)a0;
- (BOOL)hasSentAwemeModelInThisLife:(id)a0;
- (BOOL)hasSentAwemeIDInThisLife:(id)a0;
- (id)getAwemeModelOfItemID:(id)a0;
- (id)getAwemeModelAtIndexPath:(id)a0;
- (id)getDataController;
- (void)requestVideoModels:(id)a0 requestScene:(id)a1 completion:(id /* block */)a2;
- (void)p_checkUserSendCardPrivilegeWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
