@class NSString;

@interface AWEIMElfBotMemoryUserTopic : AWEIMERawDictionaryModel

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *content;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
