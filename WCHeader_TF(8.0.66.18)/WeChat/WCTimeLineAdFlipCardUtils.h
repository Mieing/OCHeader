@interface WCTimeLineAdFlipCardUtils : NSObject

+ (id)generateSimpleLabelWithFont:(id)a0 textColor:(id)a1 text:(id)a2;
+ (id)generateImageViewWithSize:(struct CGSize { double x0; double x1; })a0 url:(id)a1;
+ (double)calcIntroduceViewHeightForCardInfo:(id)a0;
+ (double)fetchCardWidthWithScene:(unsigned long long)a0 fixMediaSize:(struct CGSize { double x0; double x1; })a1;
+ (double)fetchMediaHeightWithScene:(unsigned long long)a0 fixMediaSize:(struct CGSize { double x0; double x1; })a1;
+ (double)fetchHeightForDataItem:(id)a0 withScene:(unsigned long long)a1 fixMediaSize:(struct CGSize { double x0; double x1; })a2;
+ (id)generateKeyframeAnimationWithKeyPath:(id)a0 duration:(double)a1 timingFunctions:(id)a2 values:(id)a3 keyTimes:(id)a4;
+ (void)updateViewWidth:(id)a0 maxWidth:(double)a1;

@end
