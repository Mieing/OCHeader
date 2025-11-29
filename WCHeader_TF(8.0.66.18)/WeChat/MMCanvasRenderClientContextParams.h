@class NSString;
@protocol MMCanvasRenderClientContextDelegate, MMWebJsCanvasViewPortDelegate;

@interface MMCanvasRenderClientContextParams : NSObject

@property (copy, nonatomic) NSString *canvasId;
@property (nonatomic) double windowWidth;
@property (weak, nonatomic) id<MMWebJsCanvasViewPortDelegate> viewDelegate;
@property (weak, nonatomic) id<MMCanvasRenderClientContextDelegate> contextDelegate;
@property (nonatomic) unsigned long long viewDelegatePtr;

- (void).cxx_destruct;

@end
