@class NSArray, NSDictionary, NSMutableDictionary;
@protocol TIMXConversationModelProtocol;

@interface TIMXOMessagesDataSourceIntegrityConfig : NSObject

@property (copy, nonatomic) NSArray *allFiltered;
@property (nonatomic) long long minIndexV1;
@property (nonatomic) long long minIndexV2;
@property (nonatomic) long long limit;
@property (copy, nonatomic) NSArray *messages;
@property (nonatomic) BOOL compensation;
@property (nonatomic) BOOL dbHasMore;
@property (nonatomic) BOOL serverHasMore;
@property (retain, nonatomic) id<TIMXConversationModelProtocol> conversation;
@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSMutableDictionary *compensationContext;
@property (copy, nonatomic) NSArray *currentMessagesFiltered;

- (void).cxx_destruct;

@end
