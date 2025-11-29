@class BaseRequest, NSString;

@interface GetHDHeadImgRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int imgWidth;
@property (nonatomic) unsigned int imgHeight;
@property (retain, nonatomic) NSString *imgFormat;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int headImgType;

+ (void)initialize;

@end
