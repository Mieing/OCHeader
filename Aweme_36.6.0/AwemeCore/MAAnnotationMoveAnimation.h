@class NSString, NSArray;

@interface MAAnnotationMoveAnimation : NSObject {
    long long _passedPointCount;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } *coordinates;
@property (nonatomic) unsigned long long count;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } startCoord;
@property (nonatomic) double elapsedTime;
@property (copy, nonatomic) id /* block */ completeCallback;
@property (copy, nonatomic) id /* block */ stepCallback;
@property (retain, nonatomic) NSArray *keyTimePoints;

+ (id)makeInstanceWith:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0 count:(long long)a1 duration:(double)a2 name:(id)a3 completeCallback:(id /* block */)a4 stepCallback:(id /* block */)a5;

- (void)MAAnnotationMoveAnimationDeallocOperation;
- (void)triggerCompleteCallback:(BOOL)a0;
- (void)calculateWithCoord:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct CLLocationCoordinate2D { double x0; double x1; })getCurrentCoordWith:(double)a0;
- (void)triggerStepCallback;
- (long long)passedPointCount;
- (void).cxx_destruct;
- (void)dealloc;
- (void)step:(double)a0;
- (void)cancel;

@end
