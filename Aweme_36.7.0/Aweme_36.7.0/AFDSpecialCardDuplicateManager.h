@class NSString, NSMutableDictionary;

@interface AFDSpecialCardDuplicateManager : NSObject <AWEUserMessage, AFDSpecialCardDuplicateManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *cardMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)willStartSwitchAccountWithUser:(id)a0;
- (BOOL)shouldCheckCardHasShown:(id)a0;
- (void)clearAllCards;
- (void)recordCardWithBusinessID:(id)a0 awemeID:(id)a1 feedType:(long long)a2;
- (void)markCardAsShownWithBusinessID:(id)a0 feedType:(long long)a1;
- (id)unShownCardIdWithBusinessID:(id)a0 exceptFeedType:(long long)a1;
- (BOOL)checkHasShownCardWithBusinessID:(id)a0 exceptFeedType:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
