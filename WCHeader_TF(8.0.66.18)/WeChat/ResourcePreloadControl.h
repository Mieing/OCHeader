@class NSMutableArray;

@interface ResourcePreloadControl : WXPBGeneratedMessage

@property (nonatomic) BOOL disable;
@property (retain, nonatomic) NSMutableArray *queryStringKeyList;
@property (nonatomic) unsigned int maxWebPreloadFileCount;
@property (nonatomic) unsigned int diskLimitTimeSec;

+ (void)initialize;

- (void)setDiskLimitTimeSec:(unsigned int)a0;
- (unsigned int)diskLimitTimeSec;
- (void)setMaxWebPreloadFileCount:(unsigned int)a0;
- (unsigned int)maxWebPreloadFileCount;
- (void)setQueryStringKeyList:(id)a0;
- (id)queryStringKeyList;
- (void)setDisable:(BOOL)a0;
- (BOOL)disable;

@end
