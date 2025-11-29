@class NSArray, NSMutableDictionary, IESIMChatListInsertMetrics, NSMutableArray;

@interface IESIMChatListInsertContext : NSObject

@property (retain, nonatomic) NSArray *insertChats;
@property (nonatomic) BOOL isSorted;
@property (retain, nonatomic) NSMutableDictionary *chatDict;
@property (retain, nonatomic) NSMutableArray *chatArray;
@property (retain, nonatomic) NSArray *movedChats;
@property (retain, nonatomic) IESIMChatListInsertMetrics *metrics;
@property (nonatomic) BOOL hasPreSort;
@property (nonatomic) BOOL needNotifyInteractNotificationManager;
@property (nonatomic) BOOL onlyUpdateChatNotInsert;
@property (copy, nonatomic) id /* block */ movedChatsCallback;

- (id)initWithChats:(id)a0;
- (void).cxx_destruct;

@end
