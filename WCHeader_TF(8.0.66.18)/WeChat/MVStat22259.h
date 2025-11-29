@class NSMutableArray;

@interface MVStat22259 : NSObject

@property (retain, nonatomic) NSMutableArray *commonParams;
@property (retain, nonatomic) NSMutableArray *params;

+ (id)infoWithSessionId:(id)a0 editSessionId:(id)a1 musicInfo:(id)a2 songId:(id)a3 partNum:(int)a4 createType:(unsigned long long)a5;

- (id)init;
- (id)logExt;
- (void)reset;
- (void)commit;
- (id)getSessionId;
- (void)enterEditView:(unsigned long long)a0;
- (void)selectMaterial:(id)a0 authorId:(id)a1 pos:(int)a2 partId:(int)a3 from:(unsigned long long)a4 isNullBefore:(BOOL)a5 reqId:(id)a6 pageType:(unsigned long long)a7;
- (void)searchMaterial:(id)a0;
- (void)doneEditMaterial:(id)a0 authorId:(id)a1 pos:(int)a2 partId:(int)a3 from:(unsigned long long)a4 isNullBefore:(BOOL)a5 isCut:(BOOL)a6 reqId:(id)a7;
- (void)cancelEditMaterial:(id)a0 authorId:(id)a1 pos:(int)a2 partId:(int)a3 from:(unsigned long long)a4 isNullBefore:(BOOL)a5 isCut:(BOOL)a6 reqId:(id)a7;
- (void)changeMode:(unsigned long long)a0;
- (void)removeMaterial:(id)a0 authorId:(id)a1 pageType:(unsigned long long)a2;
- (void)doneEditToPreview:(id)a0 imgCount:(unsigned long long)a1 videoCount:(unsigned long long)a2;
- (void)donePreview:(unsigned long long)a0;
- (void)post:(BOOL)a0;
- (void)clickPost;
- (void)cancelPost:(id)a0;
- (void)saveDraft:(BOOL)a0 mvClipFillStatus:(id)a1;
- (void)postSucceed:(id)a0;
- (void)appearMaterial:(id)a0 authorId:(id)a1 pos:(int)a2 reqId:(id)a3 feedFrom:(unsigned long long)a4;
- (void)changeTransition:(unsigned long long)a0;
- (void)clickReplayBtn;
- (void)zoomTimeScrollView;
- (void)sortMaterial;
- (void)setAction:(unsigned long long)a0;
- (void)setIsSave:(BOOL)a0;
- (void)updateMyFinderId;
- (void)setMvObjectId:(id)a0;
- (void)setIsFinderNew:(BOOL)a0;
- (void)setMvClipFillStatus:(id)a0;
- (void)setFeedId:(id)a0;
- (void)setFeedUin:(id)a0;
- (void)setKeyword:(id)a0;
- (void)setExpId:(id)a0;
- (void)setMaterialPos:(int)a0;
- (void)setThisPart:(int)a0;
- (void)setFeedFrom:(unsigned long long)a0;
- (void)setIsEdit:(BOOL)a0;
- (void)setIsNullBeforeSelect:(BOOL)a0;
- (void)setEnterScene:(unsigned long long)a0;
- (void)setReqId:(id)a0;
- (void)setCreateType:(unsigned long long)a0;
- (void)setMaterialCount:(unsigned long long)a0 videoCount:(unsigned long long)a1;
- (void)setTransition:(unsigned long long)a0;
- (void)setHideMaterialCount:(unsigned long long)a0;
- (void)setPageType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
