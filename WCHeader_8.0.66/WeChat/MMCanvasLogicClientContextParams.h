@class MMWebCanvasItemData;
@protocol MMWebJsCanvasViewPortDelegate;

@interface MMCanvasLogicClientContextParams : NSObject

@property (retain, nonatomic) MMWebCanvasItemData *canvasItemData;
@property (nonatomic) long long pubPkgVersion;
@property (nonatomic) long long bizPkgVersion;
@property (nonatomic) double windowWidth;
@property (nonatomic) BOOL preload;
@property (weak, nonatomic) id<MMWebJsCanvasViewPortDelegate> viewDelegate;
@property (copy, nonatomic) id /* block */ prepareCompletion;
@property (copy, nonatomic) id /* block */ deleteHandler;

- (void).cxx_destruct;

@end
