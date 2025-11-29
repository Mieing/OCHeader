@class NSString, BaseResponse;

@interface FinderBatchLoadObjectBaseResponse : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectId;
@property (retain, nonatomic) NSString *exportId;
@property (retain, nonatomic) BaseResponse *baseResponse;

+ (void)initialize;

@end
