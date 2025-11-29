@class NSString, BaseResponse;

@interface ShakeTVResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int endFlag;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *descriptionXml;

+ (void)initialize;

@end
