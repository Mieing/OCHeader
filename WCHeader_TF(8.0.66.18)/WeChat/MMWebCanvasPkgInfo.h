@class MMWebCanvasBasePkgInfo, MMWebCanvasBizPkgInfo;

@interface MMWebCanvasPkgInfo : NSObject

@property (retain, nonatomic) MMWebCanvasBasePkgInfo *basePkgInfo;
@property (retain, nonatomic) MMWebCanvasBizPkgInfo *bizPkgInfo;

- (id)description;
- (void).cxx_destruct;

@end
