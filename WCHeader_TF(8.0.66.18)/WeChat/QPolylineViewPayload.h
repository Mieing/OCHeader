@class UIColor, UIImage;

@interface QPolylineViewPayload : QPathViewPayload

@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *eraseColor;
@property (nonatomic) long long drawType;
@property (retain, nonatomic) UIImage *styleTextureImage;
@property (nonatomic) double footprintStep;
@property (nonatomic) BOOL drawSymbol;
@property (nonatomic) BOOL useGradient;
@property (retain, nonatomic) UIImage *symbolImage;
@property (nonatomic) double symbolGap;

- (void).cxx_destruct;

@end
