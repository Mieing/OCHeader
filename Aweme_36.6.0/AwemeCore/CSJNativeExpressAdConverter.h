@class NSMutableArray, CSJAdSlot;
@protocol CSJNativeExpressAdConverterDelegate;

@interface CSJNativeExpressAdConverter : NSObject

@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (retain, nonatomic) NSMutableArray *nativeExpressAdViewArray;
@property (weak, nonatomic) id<CSJNativeExpressAdConverterDelegate> delegate;

- (void)convertWithNativeAdArray:(id)a0;
- (id)initWithAdSlot:(id)a0;
- (void)safeThread_convertWithNativeAdArray:(id)a0;
- (void)pbu_preloadImagesWithNativeAd:(id)a0;
- (void)pbu_fetchTemplateDataWithNativeAd:(id)a0 group:(id)a1;
- (void)safeDelegate_nativeExpressAdConverter:(id)a0 nativeExpressAdViewArray:(id)a1;
- (void)pbu_adjustSlotViewSizeIfNeedWithNativeAd:(id)a0;
- (id)pbu_nativeExpressAdViewWithNativeAd:(id)a0;
- (id)safeDelegate_expressAdViewDelegateInNativeExpressAdConverter:(id)a0;
- (id)safeDelegate_expressAdViewDismissDelegateInNativeExpressAdConverter:(id)a0;
- (void).cxx_destruct;

@end
