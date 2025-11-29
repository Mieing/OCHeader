@class BDPMapCalloutModel;

@interface BDPMapCalloutViewModel : BDPBasePluginModel

@property (copy, nonatomic) BDPMapCalloutModel *callout;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double labelMaxWidth;
@property (nonatomic) double labelMaxHeight;
@property (nonatomic) double triangleWidth;
@property (nonatomic) double triangleHeight;
@property (nonatomic) double triangleRadius;

- (void)resetProperty;
- (void).cxx_destruct;
- (id)init;

@end
