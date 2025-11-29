@interface PAGLayer : NSObject {
    id _impl;
}

- (id)initWithImpl:(id)a0;
- (long long)layerType;
- (id)layerName;
- (id)impl;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })matrix;
- (void)setMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)resetMatrix;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTotalMatrix;
- (BOOL)visible;
- (void)setVisible:(BOOL)a0;
- (long long)editableIndex;
- (id)parent;
- (id)markers;
- (long long)localTimeToGlobal:(long long)a0;
- (long long)globalToLocalTime:(long long)a0;
- (long long)duration;
- (float)frameRate;
- (long long)startTime;
- (void)setStartTime:(long long)a0;
- (long long)currentTime;
- (void)setCurrentTime:(long long)a0;
- (double)getProgress;
- (void)setProgress:(double)a0;
- (id)trackMatteLayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBounds;
- (BOOL)excludedFromTimeline;
- (void)setExcludedFromTimeline:(BOOL)a0;
- (void)dealloc;

@end
