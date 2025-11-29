@class NSString, BaseResponse;

@interface FinderUploadHeadImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (retain, nonatomic) NSString *imgUrl;
@property (nonatomic) BOOL completed;

+ (void)initialize;

@end
