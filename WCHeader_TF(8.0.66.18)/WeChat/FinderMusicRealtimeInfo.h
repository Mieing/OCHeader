@interface FinderMusicRealtimeInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long refCount;
@property (nonatomic) unsigned long long playCount;

+ (void)initialize;

- (void)setPlayCount:(unsigned long long)a0;
- (unsigned long long)playCount;
- (void)setRefCount:(unsigned long long)a0;
- (unsigned long long)refCount;

@end
