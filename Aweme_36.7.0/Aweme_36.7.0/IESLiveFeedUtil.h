@interface IESLiveFeedUtil : NSObject

+ (void)setImageWithTagImageView:(id)a0 loadUrls:(id)a1 perferHeight:(double)a2;
+ (void)setImageWithCoverImageView:(id)a0 loadUrls:(id)a1 completed:(id /* block */)a2;
+ (void)setImageWithCoverImageView:(id)a0 loadUrls:(id)a1;
+ (BOOL)innerFeedEnableSlideUpLoadingStatusWithEnterFrom:(id)a0 withEnterMethod:(id)a1;
+ (long long)liveInnerFeedSlideUpLoadingStyle;
+ (BOOL)innerFeedEnablePullRefreshWithEnterFrom:(id)a0 withEnterMethod:(id)a1;
+ (int)getPointPosition:(struct CGPoint { double x0; double x1; })a0 attachViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 splitColumns:(int)a2 splitRows:(int)a3;
+ (id)displayTimeFromCreateTime:(id)a0;

@end
