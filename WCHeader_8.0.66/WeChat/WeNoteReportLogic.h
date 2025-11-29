@class NSString;

@interface WeNoteReportLogic : NSObject {
    NSString *m_noteID;
    NSString *m_sessionId;
    int m_enterNoteScene;
    BOOL m_isFromChatRoom;
    BOOL m_editable;
    int m_viewImageCount;
}

- (id)initWithNoteID:(id)a0 sessionId:(id)a1 openScene:(int)a2 editable:(BOOL)a3 isFromChatRoom:(BOOL)a4;
- (void)increaseViewImageCount;
- (void)reportILogsWith:(int)a0 logExt:(id)a1;
- (void)report14789WithIsSmallImageMode:(BOOL)a0 isInTranslation:(BOOL)a1;
- (void)report27798WithTotalSize:(long long)a0 favData:(id)a1 msgIDOrFeedID:(id)a2 actionType:(unsigned int)a3 actionResult:(unsigned int)a4 scene:(unsigned int)a5;
- (void)reportToolViewOperation:(int)a0 isSmallImageMode:(BOOL)a1;
- (void)reportToolViewOperation:(int)a0 isSmallImageMode:(BOOL)a1 MediaType:(unsigned long long)a2;
- (void)reportToolViewOperation:(int)a0 isSmallImageMode:(BOOL)a1 MediaType:(unsigned long long)a2 favDetail:(id)a3 count:(unsigned int)a4;
- (void)reportNoteContentSearchWithActionType:(int)a0;
- (void)reportActionSheetOperation:(unsigned int)a0 isSmallImageMode:(BOOL)a1;
- (void)reportTranslationWithFromTitleBtn:(BOOL)a0 result:(unsigned int)a1;
- (void)reportOnTop:(unsigned int)a0 onTop:(BOOL)a1;
- (void)reportSaveNoteImageWidth:(unsigned long long)a0 Height:(unsigned long long)a1 Length:(unsigned long long)a2 errorCode:(unsigned int)a3 Editable:(unsigned long long)a4;
- (void)report34070FlutterNoteErrorNoteId:(id)a0 ErrCode:(int)a1 ErrMsg:(id)a2 SessionId:(id)a3 IsEditable:(BOOL)a4;
- (void).cxx_destruct;

@end
