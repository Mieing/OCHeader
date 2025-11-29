@class NSString, NSDictionary;

@interface NLESegment_OC : NLENode_OC

@property (copy, nonatomic) NSString *userInfoString;
@property (readonly, nonatomic) long long aek_textStyle;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } dve_timeRange;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } dve_resourceDuration;
@property (nonatomic) struct shared_ptr<cut::model::NLESegment> { struct NLESegment *x0; struct __shared_weak_count *x1; } cppValue;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLESegment> { struct NLESegment *x0; struct __shared_weak_count *x1; })a0;
- (id)getResNode;
- (BOOL)aek_isInfoSticker;
- (unsigned long long)getType;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })getDuration;
- (id)init;

@end
