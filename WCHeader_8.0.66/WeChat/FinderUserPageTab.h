@class NSString;

@interface FinderUserPageTab : WXPBGeneratedMessage

@property (nonatomic) unsigned int tabType;
@property (retain, nonatomic) NSString *tabName;
@property (nonatomic) unsigned int isPrefetch;

+ (void)initialize;

- (void)setIsPrefetch:(unsigned int)a0;
- (unsigned int)isPrefetch;
- (void)setTabName:(id)a0;
- (id)tabName;
- (void)setTabType:(unsigned int)a0;
- (unsigned int)tabType;

@end
