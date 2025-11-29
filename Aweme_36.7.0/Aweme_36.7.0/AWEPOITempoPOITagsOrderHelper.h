@interface AWEPOITempoPOITagsOrderHelper : NSObject

+ (id)getOrderedTagsArrayWithRankTags:(id)a0 honorTags:(id)a1 itemsMargin:(long long)a2 widgetMaxLines:(long long)a3 widgetWidth:(long long)a4;
+ (id)getAllTagsWidthWithRankTags:(id)a0 honorTags:(id)a1;
+ (id)partitionArrayWithTagsWidthArray:(id)a0 itemsMargin:(long long)a1 widgetWidth:(long long)a2;
+ (double)getStatsRankWidth:(id)a0;
+ (double)getIPRankWidth:(id)a0;
+ (double)getChinaBrandHonorTagWidth;
+ (double)getHonorTagWidth:(id)a0;
+ (id)findOptimalSubsets:(id)a0 lineOneWidth:(double)a1 lineTwoWidth:(double)a2;
+ (void)backtrackWithArr:(id)a0 lineOneWidth:(long long)a1 lineTwoWidth:(long long)a2 minDiff:(double *)a3 index:(long long)a4 bestE:(id *)a5 bestF:(id *)a6 sumE:(double)a7 sumF:(double)a8 arrayOne:(id)a9 arrayTwo:(id)a10;

@end
