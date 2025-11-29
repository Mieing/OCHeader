@class NSString;

@interface ACCVideoDataNoteAutoCropCanvasRule : NSObject <ACCVideoDataCanvasRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateEditCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (id)updatePublishCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (struct CGSize { double x0; double x1; })editCanvasSizeWithContentSize:(struct CGSize { double x0; double x1; })a0 needExchange:(BOOL)a1 cropSize:(struct CGSize { double x0; double x1; })a2 standPlayerSize:(struct CGSize { double x0; double x1; })a3 minCanvasSize:(struct CGSize { double x0; double x1; })a4;
+ (struct CGSize { double x0; double x1; })editCanvasSizeWithPublishModel:(id)a0;


@end
