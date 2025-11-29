@interface AWEPOIPrivateUtils : NSObject

+ (id)formatURLString:(id)a0;
+ (void)spuDetailWithSpuModel:(id)a0 enterFrom:(id)a1 detailEnterPage:(id)a2 detailEnterMethod:(id)a3 trackParams:(id)a4 extraQuery:(id)a5;
+ (void)spuDetailWithSpuModel:(id)a0 enterFrom:(id)a1 detailEnterPage:(id)a2 detailEnterMethod:(id)a3 trackParams:(id)a4;
+ (BOOL)serviceButtonDidTappedWithServiceModel:(id)a0 poiInfo:(id)a1 aweme:(id)a2 traceSessionID:(id)a3 trackerData:(id)a4;
+ (void)transferToMicroAppURLString:(id)a0;
+ (void)spuDetailWithCOISpuModel:(id)a0 traceSessionID:(id)a1;

@end
