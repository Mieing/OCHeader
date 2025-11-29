@class BaseRequest, NSString;

@interface PstnCheckNumberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *pureNumber;
@property (retain, nonatomic) NSString *clientCountry;
@property (retain, nonatomic) NSString *lastCountry;
@property (retain, nonatomic) NSString *simCountry;
@property (retain, nonatomic) NSString *osCountry;
@property (nonatomic) unsigned int dialScene;

+ (void)initialize;

@end
