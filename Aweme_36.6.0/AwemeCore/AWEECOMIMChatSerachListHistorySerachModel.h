@class NSArray;

@interface AWEECOMIMChatSerachListHistorySerachModel : NSObject

@property (copy, nonatomic) NSArray *historySerachListArr;

+ (id)generateChatListHistorySerachList;
+ (id)chatListHistorySerachStoreKey;
+ (id)generateChatListHistorySerachModel;
+ (void)storeChatListHistorySerachWithSerachStr:(id)a0;
+ (void)clearChatListHistorySerach;
+ (void)clearChatListHistorySerachWithStr:(id)a0;
+ (id)kvStore;

- (void).cxx_destruct;

@end
