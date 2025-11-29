@interface WCAdRockPaperScissorsUtils : NSObject

+ (double)calcTitleAreaHeight;
+ (double)calcViewHeightWith:(id)a0 maxWidth:(double)a1;
+ (double)calcDisplayHeightWith:(id)a0;
+ (double)calcScaledLengthWith:(double)a0 maxWidth:(double)a1;
+ (double)calcScaledLengthWith:(double)a0 ratio:(double)a1;
+ (double)calcScaleRatio:(double)a0;
+ (id)fetchPagViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pagInfo:(id)a1 repeated:(BOOL)a2;
+ (id)fetchImageViewWithUrl:(id)a0 darkUrl:(id)a1;
+ (id)fetchLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;

@end
