@class NSString, NSMutableArray;
@protocol MsgNewImgDataLogicDelegate;

@interface MsgNewImgDataLogic : MMObject {
    NSString *m_nsChatName;
    unsigned int m_uiLeastLoadCount;
    unsigned int m_firstMsgCreateTime;
    unsigned int m_lastMsgCreateTime;
    unsigned int m_cursorPreCreateTime;
    unsigned int m_cursourNextCreateTime;
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrPreMsg;
    NSMutableArray *m_arrNextMsg;
    NSMutableArray *m_arrSimpleMsg;
    NSString *m_searchText;
    NSMutableArray *m_searchMsgArr;
}

@property (retain, nonatomic) NSString *m_enterpriseBrandUserName;
@property (nonatomic) BOOL m_bLoading;
@property (weak, nonatomic) id<MsgNewImgDataLogicDelegate> m_delegate;
@property (nonatomic) BOOL m_preEnd;
@property (nonatomic) BOOL m_nextEnd;
@property (nonatomic) BOOL m_bNeedFullMessage;
@property (nonatomic) BOOL m_bDestroy;

- (id)initWithPreLoadCount:(unsigned int)a0 ChatName:(id)a1;
- (id)getSearchText;
- (void)doSearch:(id)a0;
- (BOOL)isMatchMsg:(id)a0 SearchText:(id)a1;
- (BOOL)matchContent:(id)a0 withQuery:(id)a1;
- (void)setMinSerachMsgCreateTime:(double)a0;
- (void)resetWithCurrentMsg:(id)a0;
- (void)updateMsgArray;
- (id)getSimpleMsgFrom:(id)a0;
- (id)getMsgArray;
- (BOOL)isMsgMatch:(id)a0;
- (unsigned int)getFirstDateOfASection:(unsigned int)a0 interval:(double *)a1;
- (id)asyncLoadImg:(BOOL)a0;
- (void)loadPre:(BOOL)a0 loadNext:(BOOL)a1;
- (id)getSimpleMsgArray;
- (void)removeMsgByLocalID:(unsigned int)a0;
- (void)removeSearchMsgByLocalID:(unsigned int)a0;
- (unsigned int)getIndexForSimpleMsg:(id)a0;
- (id)getNextCurMsg:(id)a0;
- (void).cxx_destruct;

@end
