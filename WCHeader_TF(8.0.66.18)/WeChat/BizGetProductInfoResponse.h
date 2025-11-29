@class NSString, BaseResponse;

@interface BizGetProductInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *descXml;
@property (retain, nonatomic) NSString *productId;

+ (void)initialize;

@end
