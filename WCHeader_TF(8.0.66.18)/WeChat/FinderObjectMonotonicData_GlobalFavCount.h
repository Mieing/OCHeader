@class FinderObjectVersionData;

@interface FinderObjectMonotonicData_GlobalFavCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int globalFavCount;
@property (retain, nonatomic) FinderObjectVersionData *versionData;

+ (void)initialize;

- (void)setVersionData:(id)a0;
- (id)versionData;
- (void)setGlobalFavCount:(unsigned int)a0;
- (unsigned int)globalFavCount;

@end
