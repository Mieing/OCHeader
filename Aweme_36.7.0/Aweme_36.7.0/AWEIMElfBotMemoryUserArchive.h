@class NSString;

@interface AWEIMElfBotMemoryUserArchive : AWEIMERawDictionaryModel

@property (nonatomic) long long updateTime;
@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *content;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
