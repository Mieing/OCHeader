@class NSString, NSMutableArray, VoiceAutoTransReporter;
@protocol VoiceAutoTranslateHelperDelegate;

@interface VoiceAutoTranslateHelper : NSObject <VoiceTranslateExt>

@property (nonatomic) BOOL continueTranslate;
@property (retain, nonatomic) VoiceAutoTransReporter *reporter;
@property (retain, nonatomic) NSMutableArray *autoTranslateQueue;
@property (nonatomic) BOOL bAutoScrollUp;
@property (weak, nonatomic) id<VoiceAutoTranslateHelperDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)translateMsgList;
- (void)StopAutoVoiceTranslate;
- (void)onVoiceStartTranslate:(id)a0;
- (id)getSortMsgArr;
- (void)AddMessageLocalID:(unsigned int)a0;
- (void)OnVoiceTranslateStart:(id)a0;
- (void)OnVoiceTranslateEnd:(id)a0 StopReason:(int)a1;
- (void)OnStopAutoScrollUp;
- (void)OnUserScrollView:(id)a0;
- (unsigned long long)getMsgIndexWithLocalId:(unsigned int)a0 InArr:(id)a1;
- (void).cxx_destruct;

@end
