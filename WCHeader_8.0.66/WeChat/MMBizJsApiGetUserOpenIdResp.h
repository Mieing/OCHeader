@class NSString, BaseResponse;

@interface MMBizJsApiGetUserOpenIdResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *opnid;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headImgUrl;
@property (retain, nonatomic) NSString *sign;
@property (nonatomic) unsigned int friendRelation;

+ (void)initialize;

@end
