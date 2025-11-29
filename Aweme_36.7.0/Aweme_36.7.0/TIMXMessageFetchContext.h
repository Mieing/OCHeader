@class NSString, NSArray, NSError, NSMutableArray;
@protocol TIMXMessageIntergrityConversationInfoProtocol;

@interface TIMXMessageFetchContext : NSObject

@property (nonatomic) long long indexV1;
@property (nonatomic) long long indexV2;
@property (retain, nonatomic) id<TIMXMessageIntergrityConversationInfoProtocol> conversation;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) long long nextIndexV1;
@property (retain, nonatomic) NSArray *returnVisibleMsgs;
@property (retain, nonatomic) NSArray *returnAllMsgs;
@property (retain, nonatomic) NSMutableArray *result;
@property (retain, nonatomic) NSMutableArray *allResult;
@property (nonatomic) long long currentRecursiveCount;
@property (nonatomic) long long maxRecursiveCount;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long minIndexV2;
@property (nonatomic) long long maxIndexV2;

- (void).cxx_destruct;

@end
