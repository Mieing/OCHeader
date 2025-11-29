@class NSDictionary, NSString;
@protocol MMCanvasJsApiHandlerViewDelegate;

@interface MMCanvasJsApiHandler : NSObject

@property (retain, nonatomic) NSDictionary *fontWeightMap;
@property (copy, nonatomic) NSString *canvasId;
@property (nonatomic) double videoTop;
@property (nonatomic) double videoBottom;
@property (nonatomic) double windowWidth;
@property (weak, nonatomic) id<MMCanvasJsApiHandlerViewDelegate> delegate;

- (id)init;
- (void)setupApiWithJSContext:(id)a0;
- (void)dealloc;
- (void)addApi_getId:(id)a0;
- (void)addApi_getCanvas:(id)a0;
- (void)addApi_getFontSize:(id)a0;
- (void)addApi_isDarkMode:(id)a0;
- (void)addApi_measureText:(id)a0;
- (void)addApi_getFps:(id)a0;
- (void)addApi_isOnScreen:(id)a0;
- (void)addApi_getWidth:(id)a0;
- (void)addApi_getHeight:(id)a0;
- (void)addApi_getOffsetTop:(id)a0;
- (void)addApi_getOffsetHeight:(id)a0;
- (void)addApi_setHeight:(id)a0;
- (void)addApi_setVideo:(id)a0;
- (void)addApi_canVideoAutoPlay:(id)a0;
- (void)addApi_restore:(id)a0;
- (void)addApi_save:(id)a0;
- (void)addApi_isCanvasViewInBackground:(id)a0;
- (void).cxx_destruct;

@end
