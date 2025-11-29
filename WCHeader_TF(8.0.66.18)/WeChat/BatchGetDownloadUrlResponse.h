@class NSMutableArray, BaseResponse;

@interface BatchGetDownloadUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *respList;

+ (void)initialize;

@end
