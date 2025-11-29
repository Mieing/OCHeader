@class FinderObjectVersionData;

@interface FinderObjectMonotonicData_ThumbUpCount : WXPBGeneratedMessage

@property (nonatomic) unsigned int thumbUpCount;
@property (retain, nonatomic) FinderObjectVersionData *versionData;

+ (void)initialize;

- (void)setVersionData:(id)a0;
- (id)versionData;
- (void)setThumbUpCount:(unsigned int)a0;
- (unsigned int)thumbUpCount;

@end
