@class NSData, MJMovieTextSuggestionSeqBuffer, MJMovieTextSuggestionSnapshot;
@protocol MJMovieTextSuggestionProcessorDelegate;

@interface MJMovieTextSuggestionProcessor : NSObject

@property (retain, nonatomic) MJMovieTextSuggestionSeqBuffer *seqBuffer;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long lastRequestTimeMs;
@property (nonatomic) unsigned long long minRequestIntervalLimitMs;
@property (nonatomic) unsigned long long lastRequestWordCount;
@property (nonatomic) unsigned long long minWordCountChangeForRequest;
@property (retain, nonatomic) MJMovieTextSuggestionSnapshot *lastSnapshotInRequest;
@property (nonatomic) BOOL isLastSnapshotReceivedByServer;
@property (weak, nonatomic) id<MJMovieTextSuggestionProcessorDelegate> delegate;

+ (id)seqBufferInResponse:(id)a0;

- (id)init;
- (BOOL)requestSuggestionsWithContext:(id)a0 shouldForceSendRequest:(BOOL)a1;
- (id)generateNextSeqBuffer;
- (BOOL)isLatestResponse:(id)a0;
- (BOOL)canSendReqeust:(id)a0 skipWordCountDiffCheck:(BOOL)a1;
- (void)resetStatusWithContextIfNeeded:(id)a0;
- (void).cxx_destruct;

@end
