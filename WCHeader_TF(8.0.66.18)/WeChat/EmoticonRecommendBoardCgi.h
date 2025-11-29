@class NSString, NSArray, RecommendPanelEmojiCtxs, NSData;
@protocol EmoticonRecommendBoardCgiDelegate;

@interface EmoticonRecommendBoardCgi : StoreEmotionBaseCgi

@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSString *chatId;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSArray *contexts;
@property (retain, nonatomic) RecommendPanelEmojiCtxs *ctxs;
@property (retain, nonatomic) NSData *pageBuffer;
@property (retain, nonatomic) NSData *localEmoji;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int source;
@property (weak, nonatomic) id<EmoticonRecommendBoardCgiDelegate> delegate;
@property (retain, nonatomic) NSArray *recommendWraps;

- (id)initWithQueryString:(id)a0 scene:(unsigned long long)a1 chatId:(id)a2 sessionId:(id)a3 contexts:(id)a4;
- (id)initWithQueryString:(id)a0 scene:(unsigned long long)a1 chatId:(id)a2 sessionId:(id)a3 recommendCtxs:(id)a4;
- (id)initWithQueryString:(id)a0 scene:(unsigned long long)a1 sessionId:(id)a2 localEmoji:(id)a3;
- (BOOL)canStartRequest;
- (BOOL)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void)doReportWithErrorCode:(int)a0 isExpired:(BOOL)a1;
- (void).cxx_destruct;

@end
