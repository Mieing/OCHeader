@class NSString, AffWCRTEDelegateCallback;

@interface AffWCRTEHelper : NSObject <AffWCRTEDelegateBase> {
    AffWCRTEDelegateCallback *m_callBack;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sayHelloAsync:(unsigned long long)a0;
- (void)setCallback:(id)a0;
- (void)getCurrentRecordingIdAsync:(unsigned long long)a0;
- (void)getGeneralPastebordStringAsync:(unsigned long long)a0;
- (void)setGeneralPasteBoardStringAsync:(unsigned long long)a0 pasteboardString:(id)a1;
- (void)getNameForAttachmentTypeAsync:(unsigned long long)a0 nodeType:(int)a1;
- (void)getCurrentTranslateLanguageAsync:(unsigned long long)a0;
- (void)getAttachmentExpiredWordingAsync:(unsigned long long)a0;
- (void)resetCopyAttachmentInPasteBored;
- (void).cxx_destruct;

@end
