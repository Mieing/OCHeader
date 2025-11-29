@class NSArray;

@interface RxOrderedRangeIndexer : NSObject {
    struct shared_ptr<Rx::Geometry::OrderedRangeIndexer> { struct OrderedRangeIndexer *__ptr_; struct __shared_weak_count *__cntrl_; } _orderedRangeIndexer;
}

@property (readonly, nonatomic) NSArray *orderedRanges;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } containingRange;
@property (readonly, nonatomic) long long numberOfRanges;

- (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeContainingLocation:(long long)a0;
- (long long)indexOfRangeContainingLocation:(long long)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id).cxx_construct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(long long)a0;

@end
