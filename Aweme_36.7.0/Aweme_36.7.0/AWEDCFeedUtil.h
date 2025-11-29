@interface AWEDCFeedUtil : NSObject

+ (long long)getCurrentBigMode;
+ (double)getVisiblePercentWithCell:(id)a0 collectionView:(id)a1;
+ (BOOL)isPreload:(id)a0;
+ (BOOL)isFromCache:(id)a0;
+ (double)screenAbsoluteWidth;
+ (double)screenAbsoluteHeight;
+ (double)cellWidth;

@end
