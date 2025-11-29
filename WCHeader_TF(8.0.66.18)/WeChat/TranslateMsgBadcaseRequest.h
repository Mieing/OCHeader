@class BaseRequest, NSString;

@interface TranslateMsgBadcaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *oriText;
@property (retain, nonatomic) NSString *resText;
@property (retain, nonatomic) NSString *targetLang;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int fromType;

+ (void)initialize;

@end
