@class NSString, NSMutableArray;

@interface FinderObjectDynamicPagItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *pagUrl;
@property (retain, nonatomic) NSString *pagMd5;
@property (retain, nonatomic) NSMutableArray *randWordingList;

+ (void)initialize;

- (void)setRandWordingList:(id)a0;
- (id)randWordingList;
- (void)setPagMd5:(id)a0;
- (id)pagMd5;
- (void)setPagUrl:(id)a0;
- (id)pagUrl;
- (void)setKey:(id)a0;
- (id)key;

@end
