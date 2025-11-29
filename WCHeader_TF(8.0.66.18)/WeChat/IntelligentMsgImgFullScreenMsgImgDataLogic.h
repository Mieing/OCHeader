@class NSArray;

@interface IntelligentMsgImgFullScreenMsgImgDataLogic : MsgImgDataLogic {
    NSArray *m_arrResultMsg;
}

- (id)asyncLoadSomeImg:(BOOL)a0;
- (void)preLoad:(id)a0 Last:(BOOL)a1 Next:(BOOL)a2;
- (unsigned int)getIndexFor:(id)a0;
- (unsigned int)getIndexForSimpleMsg:(id)a0;
- (id)getMsgArray;
- (id)getSimpleMsgArray;
- (id)getSimpleMsgFrom:(id)a0;
- (void)setMsgArray:(id)a0;
- (void)updateMsgArray;
- (void)resetMsgArray;
- (void).cxx_destruct;

@end
