@interface WCFinderFeedDetailSizeHelper : NSObject

+ (struct CGSize { double x0; double x1; })mediaActualSizeWithMediaInfo:(id)a0 limitSize:(struct CGSize { double x0; double x1; })a1 enableClip:(BOOL)a2;
+ (double)normalMediaContentHeightWithDataItem:(id)a0 width:(double)a1;
+ (double)whRatioWithMediaInfo:(id)a0 enableClip:(BOOL)a1;
+ (BOOL)isVideoMedia:(id)a0;

@end
