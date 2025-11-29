@interface IESLiveSmallWindowPlayerViewFactory : NSObject

+ (void)adjustBtnPostion:(id)a0 rectCorner:(unsigned long long)a1 relativeContainer:(id)a2;
+ (double)sizeRatio:(id)a0;
+ (struct CGSize { double x0; double x1; })standardSizeInVerticalStream:(BOOL)a0 preferOptionsModel:(id)a1;
+ (void)buildAudioModeView:(id)a0 URLList:(id)a1 diContext:(id)a2;
+ (void)buildOperationContainer:(id)a0 completionBlock:(id /* block */)a1;

- (id)innerPlayerViewWithPreferenceModel:(id)a0;
- (id)outerPlayerViewWithPreferenceModel:(id)a0;

@end
