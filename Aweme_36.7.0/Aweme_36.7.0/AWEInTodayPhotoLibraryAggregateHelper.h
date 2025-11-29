@interface AWEInTodayPhotoLibraryAggregateHelper : NSObject

+ (void)pastMemoryAssetsFromPhotoLibraryWithDate:(id)a0 completion:(id /* block */)a1;
+ (void)pastMonthAssetsFromPhotoLibraryWithDate:(id)a0 completion:(id /* block */)a1;
+ (id)weekFirstDayWithDate:(id)a0;
+ (void)pastYearAssetsWithFilter:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)weekLastDayWithDate:(id)a0;
+ (long long)dateValue:(id)a0;
+ (BOOL)assetFilterWithAsset:(id)a0;
+ (id)validRangeListWithConfig:(id)a0;
+ (id)generateFetchOptionsPredicateWithRange:(id)a0 isFetchImage:(BOOL)a1 isFetchVideo:(BOOL)a2;
+ (id)inTodayBDTokenCert;
+ (id)fetchAssetsWithAssetIds:(id)a0 options:(id)a1 error:(id)a2;
+ (id)pastYearTodayKeyWithDate:(id)a0 prefix:(id)a1;
+ (id)pastYearWeekKeyWithDate:(id)a0 prefix:(id)a1;
+ (id)pastYearMonthKeyWithDate:(id)a0 prefix:(id)a1;
+ (void)pastDayAssetsFromPhotoLibraryWithDate:(id)a0 completion:(id /* block */)a1;
+ (void)pastWeekAssetsFromPhotoLibraryWithDate:(id)a0 completion:(id /* block */)a1;
+ (void)pastRangeAssetsFromPhotoLibraryWithRangeList:(id)a0 completion:(id /* block */)a1;
+ (void)fetchAssetsWithConfig:(id)a0 completion:(id /* block */)a1;
+ (id)imSkylightConfigWithAlbum:(id)a0;

@end
