@class NSString, NSMutableArray, BaseResponse;

@interface GetMoreChatroomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *chatroomInfoList;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSString *chatroomFilter;
@property (retain, nonatomic) NSMutableArray *banActionList;

+ (void)initialize;

@end
