@class UIColor;

@interface BDPMapSubPolylineModel : BDPBasePluginModel

@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double lineWidth;
@property (nonatomic) BOOL dottedLine;

- (id)initWithPolylineModel:(id)a0;
- (void).cxx_destruct;

@end
