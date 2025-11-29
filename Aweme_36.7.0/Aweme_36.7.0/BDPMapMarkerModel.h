@class NSString, BDPMapCalloutModel, BDPMapLabelModel, BDPMapPointModel;

@interface BDPMapMarkerModel : BDPBasePluginModel

@property (retain, nonatomic) BDPMapPointModel *point;
@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconPath;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long zIndex;
@property (nonatomic) double alpha;
@property (nonatomic) double anchorX;
@property (nonatomic) double anchorY;
@property (copy, nonatomic) BDPMapCalloutModel *callout;
@property (copy, nonatomic) BDPMapLabelModel *label;
@property (copy, nonatomic) BDPMapCalloutModel *customCallout;
@property (nonatomic) double rotate;
@property (copy, nonatomic) NSString *compareJsonString;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
