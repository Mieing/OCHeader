@class NSNumber;

@interface AWEModernStickerSliderInnerModel : NSObject

@property (nonatomic) BOOL isEnabled;
@property (retain, nonatomic) NSNumber *currentValue;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minValue;
@property (retain, nonatomic) NSNumber *maxValue;
@property (readonly, nonatomic) float defaultRatio;

- (void).cxx_destruct;

@end
