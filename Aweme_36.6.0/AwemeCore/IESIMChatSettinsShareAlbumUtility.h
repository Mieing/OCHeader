@interface IESIMChatSettinsShareAlbumUtility : NSObject

+ (id)creatAvailebleMediaModelFromMsgList:(id)a0 mediaMessageTypes:(id)a1;
+ (id)filterUnavailebleAweme:(id)a0;
+ (id)transToIMMessagesWithTTMessages:(id)a0 chatModelType:(long long)a1;
+ (id)getAvailebleModelsFromMsgList:(id)a0 mediaMessageTypes:(id)a1;
+ (id)sortMHistoryMediaModels:(id)a0;
+ (id)filterMediaMessagesFromGroups:(id)a0 mediaMessageTypes:(id)a1;
+ (void)getAvailableMediaModels:(id)a0 mediaMessageTypes:(id)a1 limit:(unsigned long long)a2 completion:(id /* block */)a3;

@end
