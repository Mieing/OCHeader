@class NSString, BaseResponse;

@interface SendPatResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *tmpl;
@property (retain, nonatomic) NSString *selfMsg;
@property (retain, nonatomic) NSString *patSuffix;
@property (nonatomic) unsigned long long msgId;
@property (nonatomic) unsigned int patSuffixVersion;

+ (void)initialize;

@end
