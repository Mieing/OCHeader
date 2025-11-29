@class NSMutableArray, NSMutableDictionary, WeNoteDataController;
@protocol WNTranslateDelegate;

@interface WNTranslateLogic : NSObject <PBMessageObserverDelegate> {
    long long m_textBeginIndex;
    unsigned long long m_curIndex;
    unsigned long long m_curLocation;
    NSMutableDictionary *m_dataIdToIndexInfo;
    NSMutableArray *m_fontAttributes;
    NSMutableDictionary *m_sentenceSeqToAttachmentDic;
    NSMutableDictionary *m_sentenceSeqToBreakStrDic;
    NSMutableDictionary *m_sentenceStyleDic;
    BOOL m_hasMoreContent;
    NSMutableArray *m_translatedSentenceList;
}

@property (weak, nonatomic) id<WNTranslateDelegate> delegate;
@property (weak, nonatomic) WeNoteDataController *dataController;
@property (nonatomic) long long translateState;
@property (nonatomic) BOOL isFromTitleBtn;
@property (nonatomic) BOOL isServerAntiGarbage;

- (id)init;
- (void)cancelTranslate;
- (void)clearState;
- (BOOL)checkPullNoticeScreenBefore;
- (void)initFontAttributes;
- (void)translate;
- (void)realTranslateWith:(id)a0;
- (void)increaseBreakCountWithSentenceSeq:(unsigned long long)a0;
- (void)confirmAttachmentSeperationInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 with:(id)a1;
- (void)extractStyleOfSentence:(id)a0 WithOriginRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 sentenceList:(id)a2;
- (void)rebuildContentStorage;
- (id)getTranslatedDataInfoWith:(id)a0;
- (void)sendWebTranslationReqWith:(id)a0;
- (void)handleWebTranslationResp:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
