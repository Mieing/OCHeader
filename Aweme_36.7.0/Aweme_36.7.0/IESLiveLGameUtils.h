@interface IESLiveLGameUtils : NSObject

+ (id)applyGaussianBlurToImage:(id)a0 withRadius:(double)a1;
+ (struct CGSize { double x0; double x1; })getAdaptSize:(struct CGSize { double x0; double x1; })a0 isLandscape:(BOOL)a1;
+ (id)generateGameRequestWithCompletion:(id /* block */)a0;
+ (id)gameString;
+ (id)convertScene:(id)a0;
+ (id)apiError:(long long)a0 errorCode:(long long)a1 errMsg:(id)a2 errorType:(id)a3;
+ (id)gameTypeStr:(unsigned long long)a0;
+ (BOOL)checkPayloadIsLGameWithDict:(id)a0;
+ (id)transferCountToString:(long long)a0;
+ (id)scenePrefix;
+ (BOOL)sizeFitLandscape:(struct CGSize { double x0; double x1; })a0 isLandscape:(BOOL)a1;
+ (id)dictionary:(id)a0 objectForKeyPath:(id)a1;
+ (void)dictionary:(id)a0 setObject:(id)a1 forKeyPath:(id)a2;

@end
