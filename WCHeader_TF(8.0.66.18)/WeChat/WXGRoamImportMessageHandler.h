@class NSString, NSMutableSet, NSMutableDictionary;

@interface WXGRoamImportMessageHandler : NSObject

@property (retain, nonatomic) NSMutableSet *setChatName;
@property (retain, nonatomic) NSMutableDictionary *mediaPathMapTable;
@property (copy, nonatomic) NSString *folderPath;
@property (nonatomic) unsigned int maxLocalID;

+ (void)finishAndUpdateSession;
+ (id)msgWrapFromMsgItem:(id)a0;
+ (id)getBakChatMsgList:(id)a0;

- (BOOL)internalRecoverMessage:(id)a0 mediaFolder:(id)a1 sessionName:(id)a2;
- (BOOL)p_addMsgFromMsgList:(id)a0 sessionName:(id)a1;
- (BOOL)p_performSpecialMessageInsert:(void *)a0 inSession:(id)a1;
- (BOOL)p_performMessageInsert:(void *)a0 svrIDArray:(id)a1 inSession:(id)a2;
- (BOOL)p_performPatMsgFilter:(void *)a0 inSession:(id)a1;
- (BOOL)p_handleMediaForMsgItem:(id)a0 msgWrap:(id)a1;
- (void)p_renameMediaFiles;
- (BOOL)p_addContactListChat;
- (void).cxx_destruct;

@end
