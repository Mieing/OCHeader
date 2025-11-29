@class CIContext, MMLiveVideoFrameWidgetManageLogic;

@interface MMLiveVideoFrameReprocessPipeLine : NSObject

@property (retain, nonatomic) MMLiveVideoFrameWidgetManageLogic *widgetManageLogic;
@property (retain, nonatomic) CIContext *compositingContext;

- (id)init;
- (void)initDefaultData;
- (struct opaqueCMSampleBuffer { } *)createCompositedSampleBufferWithVideoFrameWidgetsBeforeRender:(struct opaqueCMSampleBuffer { } *)a0 flipX:(BOOL)a1;
- (struct opaqueCMSampleBuffer { } *)createCompositedSampleBufferWithVideoFrameWidgetsBeforeSend:(struct opaqueCMSampleBuffer { } *)a0 flipX:(BOOL)a1;
- (void)createCompositingContext;
- (struct opaqueCMSampleBuffer { } *)createCompositedSampleBufferWithSourceBuffer:(struct opaqueCMSampleBuffer { } *)a0 widgetList:(id)a1 flipX:(BOOL)a2;
- (void).cxx_destruct;

@end
