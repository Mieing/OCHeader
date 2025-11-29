@class NSString;

@interface ACCVideoDataStandardCanvasRule : NSObject <ACCVideoDataCanvasRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })standCanvasSizeWithContentSize:(struct CGSize { double x0; double x1; })a0 standPlayerSize:(struct CGSize { double x0; double x1; })a1 standPlayerRatio:(double)a2 minCanvasSize:(struct CGSize { double x0; double x1; })a3;
+ (id)updateEditCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (id)updatePublishCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;


@end
