@class NSMutableArray, BaseResponse;

@interface GetFavStaticResourceInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *fontInfoList;
@property (retain, nonatomic) NSMutableArray *backGroundInfoList;
@property (nonatomic) unsigned int version;

+ (void)initialize;

@end
