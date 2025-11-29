@class NSString, WCAdvertiseInfo, WCCanvasDynamicDataLoader, WCAdOpenAdCanvasParamsInfo;
@protocol WCAdOpenAdCanvasJsLogicDelegate;

@interface WCAdOpenAdCanvasJsLogic : NSObject <WCCanvasDynamicDataLoaderDelegate>

@property (retain, nonatomic) WCCanvasDynamicDataLoader *dataLoader;
@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (retain, nonatomic) WCAdOpenAdCanvasParamsInfo *paramsInfo;
@property (nonatomic) long long jsEnterScene;
@property (nonatomic) int canvasPageScene;
@property (weak, nonatomic) id<WCAdOpenAdCanvasJsLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openAdCanvas:(id)a0 jsEnterScene:(long long)a1;
- (int)getCanvasPageScene:(long long)a0 source:(long long)a1;
- (void)notifyOpenAdCanvasSuccessWithMsg:(id)a0;
- (void)notifyOpenAdCanvasFailWithMsg:(id)a0;
- (void)showLoading;
- (void)hideLoading;
- (void)onCanvasServerDataReturn:(id)a0 errorCode:(int)a1 forLoadParams:(id)a2;
- (void).cxx_destruct;

@end
