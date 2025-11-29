@class UIColor, NSArray, NSString, BDPMapPolylineArrowOptionModel;

@interface BDPMapPolylineModel : BDPBasePluginModel

@property (copy, nonatomic) NSArray *points;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSArray *colorList;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double width;
@property (nonatomic) BOOL dottedLine;
@property (nonatomic) BOOL arrowLine;
@property (copy, nonatomic) NSString *arrowIconPath;
@property (copy, nonatomic) BDPMapPolylineArrowOptionModel *arrowOption;

+ (id)modelContainerPropertyGenericClass;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
