@class MMFinderLiveGestureWeVisionRenderParams;

@interface MMFinderLiveGestureWeVisionRenderTask : NSObject

@property (nonatomic) long long renderScriptId;
@property (nonatomic) long long animationResourceId;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) MMFinderLiveGestureWeVisionRenderParams *parameters;

- (void).cxx_destruct;

@end
