@class NSString, NSData, NSMutableArray, BaseResponse;

@interface MMListenFeedResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *cards;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *switchTextMsg;
@property (retain, nonatomic) NSString *feedCtxListenId;

+ (void)initialize;

@end
