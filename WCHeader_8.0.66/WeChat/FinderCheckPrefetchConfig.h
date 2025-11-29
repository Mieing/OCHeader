@interface FinderCheckPrefetchConfig : WXPBGeneratedMessage

@property (nonatomic) unsigned int intervalSecond;
@property (nonatomic) unsigned int lastestCount;

+ (void)initialize;

- (void)setLastestCount:(unsigned int)a0;
- (unsigned int)lastestCount;
- (void)setIntervalSecond:(unsigned int)a0;
- (unsigned int)intervalSecond;

@end
