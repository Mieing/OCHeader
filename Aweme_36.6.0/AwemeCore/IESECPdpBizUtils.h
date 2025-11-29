@interface IESECPdpBizUtils : NSObject

+ (BOOL)shouldDisableRetryWithStatusCode:(id)a0;
+ (void)configWebImageRequestConfig:(id)a0 imageUrlsArray:(id)a1 originSize:(struct CGSize { double x0; double x1; })a2;
+ (id)covertLastEcomSceneIdToPreloadScene:(id)a0;
+ (double)goodsDetailViewScale;
+ (id)srTransformerFromUrlsArray:(id)a0 originSize:(struct CGSize { double x0; double x1; })a1;
+ (double)getImageSRRatioFromImageURLsArray:(id)a0;

@end
