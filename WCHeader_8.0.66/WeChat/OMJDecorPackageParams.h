@class OMCTimeline;

@interface OMJDecorPackageParams : NSObject

@property (readonly, nonatomic) OMCTimeline *timeline;
@property (readonly, nonatomic) BOOL isImageDigiZoomDisabled;

- (id)initWithTimeline:(id)a0 isImageDigiZoomDisabled:(BOOL)a1;
- (void).cxx_destruct;

@end
