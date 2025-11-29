@class NSString;

@interface OMJLyricInfo : NSObject

@property (nonatomic) struct shared_ptr<XMJLyricInfo> { struct XMJLyricInfo *__ptr_; struct __shared_weak_count *__cntrl_; } backingInfo;
@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSString *subContent;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;

- (id)initWithBackingInfo:(const void *)a0;
- (id)initWithContent:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithContent:(id)a0 subContent:(id)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
