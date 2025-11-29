@interface EcsUtil : NSObject

+ (BOOL)shouldCheckFeatureListBeforeLaunchWeApp;
+ (BOOL)enableSignBulkBuyAppMsg;
+ (BOOL)enableGiftMessageQuote;
+ (BOOL)hasSupportFeatureWithFeatureList:(id)a0 configFeatureList:(id)a1;
+ (BOOL)isFeatureChcekOkWithFeatureId:(long long)a0 miniFeatureVersion:(long long)a1 configFeatureList:(id)a2;
+ (id)getEcsGiftMsgDatabasePath;
+ (id)convertMsgJumpInfo:(id)a0;
+ (BOOL)shouldShowSendGiftEntranceInChatToolView:(id)a0;
+ (id)getJumpInfoWithNativeRouterRequestType:(unsigned long long)a0 recipientType:(int)a1;
+ (BOOL)isEcsGiftAppMsg:(unsigned int)a0;
+ (id)getDisplayName:(id)a0;
+ (id)getDisplayNameWithChatroom:(id)a0 chatroom:(id)a1;
+ (void)replaceSceneNoteWithKey:(id)a0 value:(id)a1 miniAppInfo:(id)a2;
+ (BOOL)shouldShowRedDotInChatPlusIcon:(id)a0 isGroupChat:(BOOL)a1;
+ (BOOL)shouldShowRedDotInChatGiftIcon:(id)a0 isGroupChat:(BOOL)a1;
+ (void)markHasClearRedDotInChatPlusIconWithGroupChat:(BOOL)a0;
+ (void)markHasClearRedDotInChatGiftIconWithGroupChat:(BOOL)a0;
+ (id)generateKeyFromProductCardReqInfo:(id)a0;
+ (void)report32325WithKey:(id)a0 value:(id)a1 extra:(id)a2;
+ (id)safeGetString:(id)a0;
+ (void)commonOpenSnsEcs:(id)a0 shareSnsInfo:(id)a1 scene:(unsigned long long)a2 feedCreateTime:(unsigned long long)a3;
+ (void)openSnsEcs:(id)a0 createTime:(unsigned int)a1 jumpInfoBase64:(id)a2;
+ (id)currentGMsgIDWithFeedId:(id)a0 shareTime:(unsigned long long)a1;
+ (id)getProductCardReq:(id)a0 shareSnsInfo:(id)a1 createTime:(unsigned long long)a2;
+ (id)convertBase64Str2JumpInfo:(id)a0;

@end
