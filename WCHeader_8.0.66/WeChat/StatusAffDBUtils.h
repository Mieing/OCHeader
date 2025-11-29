@interface StatusAffDBUtils : NSObject

+ (id)createPbStatusRawData:(id)a0 emojiInfo:(id)a1 poiInfo:(id)a2 option:(long long)a3 extraInfo:(id)a4 visibilityInfo:(id)a5 customInfo:(id)a6 mediaInfos:(id)a7 footerInfo:(id)a8;
+ (id)tsModel2Proto:(id)a0;
+ (id)createPrivateInfoData:(id)a0;
+ (id)createPBPoiInfo:(id)a0;
+ (id)createPBExtraInfo:(id)a0;
+ (id)createStatusMediaInfo:(id)a0;
+ (id)createStatusFooterInfo:(id)a0;
+ (id)createVisibilityInfo:(id)a0;
+ (id)createCustomInfo:(id)a0;
+ (BOOL)isNullOrEmpty:(id)a0;
+ (id)proto2TsModel:(id)a0;
+ (void)privateInfoDataFillModel:(id)a0 model:(id)a1;
+ (void)rawDataFillModel:(id)a0 model:(id)a1;
+ (id)tsComment2Proto:(id)a0;
+ (id)proto2TsComment:(id)a0;
+ (id)tsLike2Proto:(id)a0;
+ (id)proto2TsLike:(id)a0;
+ (id)createMessageThumbData:(id)a0;
+ (id)packDBLikeId:(id)a0;
+ (long long)unPackDBLikeId:(id)a0;

@end
