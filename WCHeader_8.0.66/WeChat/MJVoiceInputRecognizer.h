@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MJVoiceInputRecognizerDelegate;

@interface MJVoiceInputRecognizer : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isRecognitionEnded;
@property (nonatomic) BOOL isEndRequestSent;
@property (nonatomic) BOOL isEndResponseReceived;
@property (nonatomic) unsigned long long numRequests;
@property (nonatomic) unsigned long long numResponses;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSMutableArray *captionItems;
@property (retain, nonatomic) NSMutableDictionary *requestStatesByIndex;
@property (weak, nonatomic) id<MJVoiceInputRecognizerDelegate> delegate;

+ (BOOL)isResponseStable:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (unsigned long long)updateRecognizerState;
- (void)updateRequestAtIndex:(unsigned int)a0 toState:(unsigned long long)a1;
- (void)appendRecognitionDataSlice:(id)a0 index:(unsigned int)a1 isEnd:(BOOL)a2;
- (void)requestSpeechResultFromData:(id)a0 sliceIndex:(unsigned int)a1 isEnd:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
