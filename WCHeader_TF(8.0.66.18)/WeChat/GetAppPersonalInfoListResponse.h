@class NSMutableArray, BaseResponse;

@interface GetAppPersonalInfoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *appPersonalInfoList;

+ (void)initialize;

@end
