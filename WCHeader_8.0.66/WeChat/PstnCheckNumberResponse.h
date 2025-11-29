@class NSString, BaseResponse;

@interface PstnCheckNumberResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *pureNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) unsigned int result;

+ (void)initialize;

@end
