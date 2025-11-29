@class NSNumber, QGPColor;
@protocol QTCOptional;

@interface QGPSetAmbientLightParam : QGPBaseModel

@property (retain, nonatomic) QGPColor<QTCOptional> *color;
@property (retain, nonatomic) NSNumber<QTCOptional> *intensity;

- (void).cxx_destruct;

@end
