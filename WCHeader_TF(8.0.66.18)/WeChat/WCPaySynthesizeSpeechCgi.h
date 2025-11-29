@class NSMutableDictionary;
@protocol WCPaySynthesizeSpeechCgiDelegate;

@interface WCPaySynthesizeSpeechCgi : NSObject <PBMessageObserverDelegate>

@property (weak, nonatomic) id<WCPaySynthesizeSpeechCgiDelegate> m_delegate;
@property (retain, nonatomic) NSMutableDictionary *m_dictSpeechMsg;
@property (retain, nonatomic) NSMutableDictionary *m_dictCGIRequestBeginTime;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)startRequestWithSynthesizeSpeechMsg:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
