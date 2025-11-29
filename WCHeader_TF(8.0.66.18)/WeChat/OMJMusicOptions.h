@class OMJMusicInfo;

@interface OMJMusicOptions : NSObject

@property (nonatomic) struct shared_ptr<XMJMusicInfo> { struct XMJMusicInfo *__ptr_; struct __shared_weak_count *__cntrl_; } backingInfo;
@property (readonly, nonatomic) OMJMusicInfo *musicInfo;
@property (readonly, nonatomic) unsigned long long sourceType;

- (id)initWithBackingMusicInfo:(const void *)a0 sourceType:(unsigned long long)a1;
- (id)initWithMusicInfo:(id)a0 sourceType:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
