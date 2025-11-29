@class NSString, NSArray;

@interface FavoritesReportLogic : NSObject

@property (nonatomic) unsigned int resultShowTime;
@property (nonatomic) unsigned int searchTime;
@property (retain, nonatomic) NSString *curNoteSessionId;
@property (retain, nonatomic) NSString *noteId;
@property (nonatomic) unsigned int viewImageCount;
@property (nonatomic) BOOL isNoteEditable;
@property (nonatomic) unsigned int mainPageType;
@property (nonatomic) BOOL bOnSearch;
@property (nonatomic) unsigned int entranceScene;
@property (retain, nonatomic) NSArray *selectedlocalPosition;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) long long filterType;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned long long localResultNum;
@property (nonatomic) BOOL needReport;
@property (nonatomic) long long curOrientation;
@property (nonatomic) BOOL isForceToPortrait;
@property (nonatomic) BOOL isSmallImage;

- (void)startSearch;
- (void)endSearch;
- (void)report15488:(unsigned long long)a0;
- (void)report14103:(unsigned long long)a0;
- (void)report14109:(unsigned long long)a0;
- (void)report14110:(unsigned long long)a0 deleteItemNum:(unsigned long long)a1 deleteTotalSize:(long long)a2;
- (void)report14790:(unsigned long long)a0 onTop:(BOOL)a1;
- (void)reportBatchEditTagOpt:(int)a0 isSuccess:(int)a1 oldTag:(id)a2 newTag:(id)a3;
- (void)convertFavEntranceScene:(unsigned int)a0 toEntranceScene:(unsigned int *)a1 toEntranceSearchScene:(unsigned int *)a2;
- (void)report15098:(id)a0;
- (void)report15378:(id)a0;
- (void)report15508:(id)a0;
- (void)report10651WithFavItem:(id)a0 DataWrap:(id)a1 toContact:(id)a2 toFriend:(BOOL)a3;
- (void)report10651WithFavItem:(id)a0 DataWrap:(id)a1 toContact:(id)a2 toFriend:(BOOL)a3 isFromSession:(BOOL)a4;
- (void)report17105:(id)a0 DeletType:(int)a1 PageType:(int)a2 ContainRecord:(BOOL)a3 ShowContext:(BOOL)a4;
- (void)report19856:(id)a0;
- (void)report24562:(int)a0 action:(int)a1 clickNum:(int)a2;
- (void)onOpenNoteWithMessage:(id)a0 WCDataItem:(id)a1 FavItem:(id)a2;
- (void)increaseImageShowCount;
- (void)onCloseNote;
- (void)reportToolViewOperation:(unsigned long long)a0;
- (void)reportAddFavOperation:(unsigned int)a0 favItemList:(id)a1 selectedCount:(unsigned int)a2;
- (void)reportToolViewOperation:(unsigned long long)a0 MediaType:(unsigned long long)a1;
- (void)reportToolViewOperation:(unsigned long long)a0 MediaType:(unsigned long long)a1 favDetail:(id)a2 count:(unsigned int)a3;
- (void)reportSaveNoteImageWidth:(unsigned long long)a0 Height:(unsigned long long)a1 Length:(unsigned long long)a2 errorCode:(unsigned long long)a3 Editable:(unsigned long long)a4;
- (void)report14789:(unsigned long long)a0 editable:(BOOL)a1 translated:(BOOL)a2 hasErrorDataType:(BOOL)a3;
- (void)reportWeNoteMenuOperation:(unsigned long long)a0;
- (void)report27798WithTotalSize:(long long)a0 favData:(id)a1 msgIDOrFeedID:(id)a2 actionType:(unsigned int)a3 actionResult:(unsigned int)a4 scene:(unsigned int)a5;
- (void)reportNoteContentSearchWithActionType:(unsigned int)a0;
- (void)reportNoteLandscape;
- (void)report28587WithIsFromTitleBtn:(BOOL)a0 result:(unsigned int)a1;
- (void)reportTingGuideAction:(unsigned int)a0;
- (void)reportWeNote32080:(unsigned int)a0 editable:(BOOL)a1 favId:(unsigned int)a2 paragraphCount:(unsigned long long)a3;
- (void)reportFavoriteConflictWithClientItem:(id)a0 serverItem:(id)a1 reportType:(unsigned int)a2;
- (void)reportViewClick:(int)a0 item:(id)a1;
- (void)report34070FlutterNoteErrorNoteId:(id)a0 ErrCode:(int)a1 ErrMsg:(id)a2 SessionId:(id)a3 IsEditable:(BOOL)a4;
- (void)report34070NoteErrorWithNoteId:(id)a0 ErrCode:(int)a1 ErrMsg:(id)a2 SessionId:(id)a3 IsEditable:(BOOL)a4 SubErrCode:(int)a5 HtmlPathInfo:(id)a6;
- (void).cxx_destruct;

@end
