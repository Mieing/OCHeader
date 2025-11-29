@class NSString, BaseResponse;

@interface GetTVInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *descriptionXml;
@property (retain, nonatomic) NSString *tvid;

+ (void)initialize;

@end
