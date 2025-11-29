@interface AWEStudioAIMemoriesUtils : NSObject

+ (long long)todayCellularNetworkUploadCount;
+ (long long)defaultCellularNetworkUploadDayCount;
+ (long long)thisMonthCellularNetworkUploadCount;
+ (long long)defaultCellularNetworkUploadMonthCount;
+ (long long)todayWIFINetworkUploadCount;
+ (long long)defaultWIFIUploadDayCount;
+ (long long)thisMonthWIFINetworkUploadCount;
+ (long long)defaultWIFIUploadMonthCount;
+ (BOOL)shouldFilterAsset:(id)a0 scanResult:(id)a1 shouldFilterAlbumName:(BOOL)a2;
+ (BOOL)isPHAssetValid:(id)a0;
+ (BOOL)hasReachUploadLimit;
+ (void)increaseCellularNetworkUploadCount:(long long)a0;
+ (BOOL)hasReachWIFIUploadLimit;
+ (void)increaseWIFIUploadUploadCount:(long long)a0;
+ (id)packEmbToData:(id)a0;
+ (id)packEmbToFloatData:(id)a0;
+ (id)packEmbToDoubleData:(id)a0;
+ (BOOL)shouldFilterAsset:(id)a0 scanResult:(id)a1;

@end
