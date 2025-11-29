@interface BrandMsgValidExposeConfig : NSObject

@property (nonatomic) unsigned int validExposureAreaRatioInPct;
@property (nonatomic) unsigned int validExposurePeriodInMs;

- (id)description;

@end
