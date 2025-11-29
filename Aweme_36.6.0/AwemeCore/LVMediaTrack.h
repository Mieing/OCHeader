@class NSString, NSArray;

@interface LVMediaTrack : NSObject <LVCopying> {
    struct shared_ptr<CutSame::Track> { struct Track *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long flag;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) long long flagInteger;
@property (copy, nonatomic) NSString *trackID;
@property (copy, nonatomic) NSArray *segments;
@property (copy, nonatomic) NSString *typeString;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Track> { struct Track *x0; struct __shared_weak_count *x1; })a0;
- (id)copyToAnother;
- (struct shared_ptr<CutSame::Track> { struct Track *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Track> { struct Track *x0; struct __shared_weak_count *x1; })a0;
- (id)initWithType:(unsigned long long)a0 trackID:(id)a1;
- (void)insertSegment:(id)a0 at:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)adjustTrackTargetStartTime;
- (id)firstSegment;
- (void)insertSegment:(id)a0 at:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 sorted:(BOOL)a2;
- (void)sort;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id).cxx_construct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
