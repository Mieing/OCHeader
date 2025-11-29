@class NSArray, WCAdSliderCardOpeningAnimationInfo, WCAdSliderCardSlideJumpInfo, WCAdSliderCardProductInfo;

@interface WCAdSliderCardInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSArray *sliderCardList;
@property (retain, nonatomic) WCAdSliderCardSlideJumpInfo *slideJumpInfo;
@property (retain, nonatomic) WCAdSliderCardOpeningAnimationInfo *openingAnimation;
@property (retain, nonatomic) WCAdSliderCardProductInfo *productInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isValid;
- (long long)fetchSliderCardStyle;
- (BOOL)hasOpeningAnimation;
- (BOOL)hasProductInfo;
- (void).cxx_destruct;

@end
