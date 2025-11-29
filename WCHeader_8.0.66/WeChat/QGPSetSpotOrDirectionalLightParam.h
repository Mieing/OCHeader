@class QGPVector3, NSNumber, QGPColor;
@protocol QTCOptional;

@interface QGPSetSpotOrDirectionalLightParam : QGPBaseModel

@property (nonatomic) long long type;
@property (retain, nonatomic) QGPColor<QTCOptional> *color;
@property (retain, nonatomic) QGPVector3<QTCOptional> *direction;
@property (retain, nonatomic) NSNumber<QTCOptional> *intensity;

- (void).cxx_destruct;

@end
