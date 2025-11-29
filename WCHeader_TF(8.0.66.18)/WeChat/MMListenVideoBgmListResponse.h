@class NSData, NSMutableArray, BaseResponse;

@interface MMListenVideoBgmListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
