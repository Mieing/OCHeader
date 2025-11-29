@class NSString, NSMutableDictionary, NSMutableSet, WXGImportAnalyseInfo;
@protocol WXGImportMessageHelperDelegate;

@interface WXGImportMessageHelper : NSObject

@property (nonatomic) BOOL bShouldImport;
@property (retain, nonatomic) NSMutableSet *setChatName;
@property (retain, nonatomic) NSMutableDictionary *mediaPathMapTable;
@property (copy, nonatomic) NSString *folderPath;
@property (nonatomic) BOOL bShouldFilterMsg;
@property (weak, nonatomic) id<WXGImportMessageHelperDelegate> delegate;
@property (readonly, nonatomic) NSMutableSet *importChatName;
@property (retain, nonatomic) WXGImportAnalyseInfo *analyseInfo;
@property (nonatomic) unsigned int maxLocalID;

+ (void)finishAndUpdateSession;
+ (id)splitMsgListIDArray:(id)a0;
+ (id)getBakChatMsgList:(id)a0;

- (id)init;
- (id)initWithMsgListFolderPath:(id)a0;
- (void)stopImport;
- (BOOL)internalRecoverMessage:(id)a0 withSessionName:(id)a1 withStartTime:(unsigned int)a2 withEndTime:(unsigned int)a3;
- (BOOL)internalRecoverMessage:(id)a0 withSessionName:(id)a1 withStartTime:(unsigned int)a2 withEndTime:(unsigned int)a3 textOnly:(BOOL)a4;
- (BOOL)internalRecoverMessage:(id)a0 withSessionName:(id)a1 withStartTime:(unsigned int)a2 withEndTime:(unsigned int)a3 textOnly:(BOOL)a4 pathRelative:(BOOL)a5;
- (BOOL)p_addMsgFromMsgList:(id)a0 withSessionName:(id)a1 withStartTime:(unsigned int)a2 withEndTime:(unsigned int)a3 textOnly:(BOOL)a4 isPathRelative:(BOOL)a5;
- (void)callBackImportOneMsgList:(id)a0;
- (BOOL)p_performSpecialMessageInsert:(void *)a0 inSession:(id)a1;
- (BOOL)p_performMessageInsert:(void *)a0 svrIDArray:(id)a1 inSession:(id)a2 chatInfo:(id)a3;
- (BOOL)p_performPatMsgFilter:(void *)a0 inSession:(id)a1;
- (BOOL)p_handleMediaForBakChatMsgItem:(id)a0 msgWrap:(id)a1 chatInfo:(id)a2;
- (void)p_renameMediaFiles;
- (BOOL)p_addContactListChat;
- (void).cxx_destruct;

@end
