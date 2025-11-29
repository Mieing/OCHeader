@interface AWEMVChannelCardLayout : NSObject

+ (BOOL)enablePadConfig;
+ (long long)getDynamicSectionColumnWith:(id)a0;
+ (long long)getDynamicSectionColumnWith:(id)a0 threshold:(long long)a1;
+ (long long)padHorizontalBreakPoint;
+ (double)padLargeCardWidthWithView:(id)a0 spacingConfig:(id)a1;
+ (long long)largeOccupyColumnCountWith:(id)a0;
+ (double)videoHeightForPlayerCard;
+ (double)playerCardInfoViewHeightWithModel:(id)a0;
+ (long long)numberOfPadColumnWithWidth:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeForPadCardType:(unsigned long long)a0 awemeModel:(id)a1 width:(double)a2;
+ (id)liveCardTitleWithAwemeModel:(id)a0;
+ (double)playerCardSliderBottomOffset;
+ (double)playerCardSliderHeight;
+ (struct CGSize { double x0; double x1; })sizeForCardType:(unsigned long long)a0 awemeModel:(id)a1 width:(double)a2;
+ (struct CGSize { double x0; double x1; })sizeForPadAuthorRecommend;
+ (struct CGSize { double x0; double x1; })sizeforPadEmptyAuthorPageSizeWithWidth:(double)a0 hasHistory:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })sizeForPadHeaderType:(unsigned long long)a0 width:(double)a1;
+ (double)smallCardInfoViewHeightWithModel:(id)a0;
+ (double)playerCardSliderTopOffset;
+ (double)screenHeight;
+ (double)screenWidth;

@end
