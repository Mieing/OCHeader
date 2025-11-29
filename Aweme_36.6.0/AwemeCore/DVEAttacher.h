@class NSArray, DVETrackPanelContext, NSString;

@interface DVEAttacher : NSObject <DVEAttachable>

@property (class, readonly, nonatomic) double attachThreshold;

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (copy, nonatomic) NSArray *attachablePoints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadPoints;
- (id)nearestToPoint:(double)a0;
- (double)coordinateWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (double)attachPoint:(double)a0 direction:(unsigned long long)a1;
- (id)getClosestWithPoints:(id)a0 index1:(long long)a1 index2:(long long)a2 target:(double)a3;
- (id)attachPoints:(id)a0 direction:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObservers;

@end
