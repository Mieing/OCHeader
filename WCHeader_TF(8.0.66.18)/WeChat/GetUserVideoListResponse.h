@class NSString, NSMutableArray, BaseResponse;

@interface GetUserVideoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *jsonData;
@property (nonatomic) BOOL hasNext;
@property (nonatomic) unsigned long long nextOffset;
@property (retain, nonatomic) NSMutableArray *videoList;
@property (retain, nonatomic) NSString *checkHasNewTicket;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int newCount;

+ (void)initialize;

@end
