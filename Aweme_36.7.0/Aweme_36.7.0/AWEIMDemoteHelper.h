@class NSString;

@interface AWEIMDemoteHelper : NSObject

@property (copy, nonatomic) NSString *bizKey;
@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ identifierCallback;

+ (id)p_dateFormatter;
+ (id)helperWithBizKey:(id)a0 version:(unsigned long long)a1;

- (void)resetScene:(id)a0;
- (id)initWithBizKey:(id)a0 version:(unsigned long long)a1;
- (void)increaseCountWithScene:(id)a0;
- (BOOL)isMoreThanOrEqualMaxCount:(unsigned long long)a0 scene:(id)a1;
- (BOOL)isMoreThanMaxDays:(unsigned long long)a0 date:(id)a1 scene:(id)a2;
- (id)p_identifier;
- (id)p_cacheKeyWithIdentifier:(id)a0 scene:(id)a1;
- (void)p_increaseClickCountWithIdentifier:(id)a0 scene:(id)a1;
- (BOOL)p_isMoreThanOrEqualMaxCount:(unsigned long long)a0 identifier:(id)a1 scene:(id)a2;
- (BOOL)p_isMoreThanMaxDays:(unsigned long long)a0 date:(id)a1 identifier:(id)a2 scene:(id)a3;
- (void)resetClickCount;
- (void)increaseClickCount;
- (BOOL)shouldDemoteWithMaxCount:(unsigned long long)a0;
- (void)resetDisplay;
- (BOOL)shouldDemoteWithDate:(id)a0 maxDays:(unsigned long long)a1;
- (long long)cachedCountWithScene:(id)a0;
- (void).cxx_destruct;

@end
