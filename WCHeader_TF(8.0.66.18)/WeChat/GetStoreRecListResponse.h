@class NSMutableArray, BaseResponse;

@interface GetStoreRecListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int emotionStoreRecListCount;
@property (retain, nonatomic) NSMutableArray *emotionStoreRecList;
@property (nonatomic) unsigned long long reportRequestId;

+ (void)initialize;

@end
