@class NSMutableArray, BaseResponse;

@interface SnsTopListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned long long continueId;
@property (nonatomic) unsigned long long nextPageMaxId;

+ (void)initialize;

@end
