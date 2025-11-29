@class NSString, NSData, NSMutableArray;
@protocol SpeakTextLoadingRequestDelegate;

@interface SpeakTextLoadingRequest : NSObject {
    unsigned int m_requestCount;
    unsigned int m_requestInterval;
}

@property (retain, nonatomic) NSString *requestText;
@property (retain, nonatomic) NSData *contextBuff;
@property (retain, nonatomic) NSMutableArray *extInfos;
@property (nonatomic) unsigned long long lastReceiveDataTime;
@property (weak, nonatomic) id<SpeakTextLoadingRequestDelegate> delegate;

- (id)initWithText:(id)a0;
- (void)startRequest;
- (void)startQueryTTS;
- (void)delayStartQueryTTS;
- (void)handleRequestFail;
- (void)updateExtInfosFromResponse:(id)a0;
- (void).cxx_destruct;

@end
