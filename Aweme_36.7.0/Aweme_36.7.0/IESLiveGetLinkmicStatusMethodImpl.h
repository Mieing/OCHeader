@class IESLiveInteractDynamicGlobalJSBHandler;

@interface IESLiveGetLinkmicStatusMethodImpl : IESLiveGetLinkmicStatusMethod

@property (retain, nonatomic) IESLiveInteractDynamicGlobalJSBHandler *globalHandler;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)callback:(id)a0 error:(id)a1 param:(id)a2 completion:(id /* block */)a3;
- (id)buildFrameInfo;
- (BOOL)isAudioLayoutConfig;
- (id)convertCGRectValueToDict:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
