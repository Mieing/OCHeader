@class NSString, MMTimer, CBaseContact;
@protocol TypingControllerDelgate;

@interface TypingController : NSObject <MessageObserverDelegate, IUploadVoiceExt, IMsgExt> {
    unsigned int m_uLastSendTypingTime;
    unsigned int m_uChatStatus;
    BOOL m_bFirstTyping;
}

@property (retain, nonatomic) CBaseContact *m_contact;
@property (retain, nonatomic) NSString *m_nsLastTextViewText;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } m_LastMarkedRange;
@property (weak, nonatomic) id<TypingControllerDelgate> m_delegate;
@property (retain, nonatomic) MMTimer *m_receiveTypingTimer;
@property (nonatomic) unsigned int m_uLastReveicedMsgTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)Register;
- (void)UnRegister;
- (BOOL)IsNeedTyping;
- (BOOL)sendChatStatusInternal:(unsigned int)a0;
- (void)trySendClearTyping;
- (void)trySendTyping:(int)a0;
- (void)onTextChange:(id)a0 markedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)updateTitle:(int)a0;
- (void)startReceiveTypingTimer;
- (void)stopReceiveTypingTimer;
- (void)onReceiveTypingTimer:(id)a0;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void)Reset;
- (void)dealloc;
- (void)OnPrepareUploadVoice:(id)a0;
- (void)OnCancelUploadVoice:(id)a0;
- (void)OnUploadVoiceOK:(id)a0;
- (void)OnAddMsg:(id)a0 MsgWrap:(id)a1;
- (void).cxx_destruct;

@end
