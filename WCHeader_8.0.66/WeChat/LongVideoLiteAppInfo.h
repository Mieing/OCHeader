@class NSString;

@interface LongVideoLiteAppInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;

+ (void)initialize;

- (void)setQuery:(id)a0;
- (id)query;
- (void)setPage:(id)a0;
- (id)page;
- (void)setAppid:(id)a0;
- (id)appid;

@end
