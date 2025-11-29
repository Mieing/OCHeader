@class NSString, BaseResponse;

@interface UploadCardImgResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int totalLen;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) NSString *cardImgUrl;

+ (void)initialize;

@end
