@class NSString, NSMutableArray;
@protocol MsgImgDataLogicDelegate;

@interface MsgImgDataLogic : NSObject {
    unsigned int m_uiPreID;
    unsigned int m_uiNextID;
    unsigned int m_uiPreCreateTime;
    unsigned int m_uiNextCreateTime;
    NSMutableArray *m_arrPreMsg;
    NSMutableArray *m_arrNextMsg;
    NSMutableArray *m_arrMsgWrap;
    NSMutableArray *m_arrSimpleMsg;
    NSString *m_nsChatName;
    unsigned int m_uiPreLoadCount;
    unsigned int m_uiPreReadCount;
}

@property (nonatomic) BOOL m_bLoading;
@property (nonatomic) BOOL m_bPreEnd;
@property (nonatomic) BOOL m_bNextEnd;
@property (retain, nonatomic) NSString *m_enterpriseBrandUserName;
@property (weak, nonatomic) id<MsgImgDataLogicDelegate> m_delegate;
@property (nonatomic) BOOL m_bNeedFullMessage;

- (id)initWithPreLoadCount:(unsigned int)a0 PreReadCount:(unsigned int)a1 ChatName:(id)a2;
- (id)getMsgArray;
- (id)getSimpleMsgFrom:(id)a0;
- (id)getSimpleMsgArray;
- (void)removeMsgByLocalID:(unsigned int)a0;
- (id)getNextCurMsg:(id)a0;
- (void)resetWithCurrentMsg:(id)a0;
- (unsigned int)getIndexForSimpleMsg:(id)a0;
- (unsigned int)getIndexFor:(id)a0;
- (id)getMsgFor:(unsigned int)a0;
- (id)getMsgByLocalID:(unsigned int)a0;
- (void)updateMsgArray;
- (BOOL)isMsgMatch:(id)a0;
- (id)asyncLoadSomeImg:(BOOL)a0;
- (void)preLoad:(id)a0 Last:(BOOL)a1 Next:(BOOL)a2;
- (void).cxx_destruct;

@end
