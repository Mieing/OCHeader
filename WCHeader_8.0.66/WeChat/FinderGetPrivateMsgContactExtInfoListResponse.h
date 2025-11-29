@class NSMutableArray, BaseResponse;

@interface FinderGetPrivateMsgContactExtInfoListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *contactInfos;
@property (nonatomic) unsigned int refreshInterval;

+ (void)initialize;

@end
