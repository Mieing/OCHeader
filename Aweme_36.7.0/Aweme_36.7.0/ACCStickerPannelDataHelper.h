@interface ACCStickerPannelDataHelper : NSObject

+ (void)downloadInfoSticker:(id)a0 trackParams:(id)a1 progressBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)stickerTypeForTag:(id)a0;
+ (BOOL)p_shouldFilter:(id)a0 tags:(id)a1;
+ (void)p_logSingleStickerDownloaded:(id)a0 trackParams:(id)a1 error:(id)a2 filePath:(id)a3 duration:(double)a4;
+ (id)merge:(id)a0 recommendData:(id)a1 pannelData:(id)a2;
+ (void)fetchInfoStickerPannelData:(id)a0 completion:(id /* block */)a1;

@end
