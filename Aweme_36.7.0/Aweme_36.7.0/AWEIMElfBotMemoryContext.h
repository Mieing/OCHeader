@interface AWEIMElfBotMemoryContext : AWEIMERawDictionaryModel

@property (nonatomic) long long msgCount;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long deleteVersion;

+ (id)modelCustomPropertyMapper;

- (BOOL)isLessThanContext:(id)a0;
- (BOOL)isGreaterThanContext:(id)a0;
- (BOOL)isEqualsToContext:(id)a0;

@end
