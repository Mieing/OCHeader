@class BaseRequest, NSMutableArray;

@interface TextStatusGetIconConfigReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long iconConfigKey;
@property (nonatomic) unsigned long long coverConfigKey;
@property (nonatomic) unsigned long long keyValueConfigKey;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSMutableArray *iconConfigIdKeys;

+ (void)initialize;

@end
