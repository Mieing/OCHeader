@class NSString, NSMutableArray, BaseResponse;

@interface FinderFetchMyRedPacketCoverResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *coverList;
@property (retain, nonatomic) NSString *redpacketCoverReddotContent;

+ (void)initialize;

@end
