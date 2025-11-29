@class OMCGeographicInfo, NSDate, OMJImageLayer, OMJID;

@interface MJImageLayerViewModel : NSObject

@property (readonly, nonatomic) OMJImageLayer *layer;
@property (readonly, nonatomic) OMJID *identifier;
@property (readonly, nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ didUpdateHandler;
@property (readonly, nonatomic) BOOL isRemovable;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) OMCGeographicInfo *geoInfo;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } layerPosition;
@property (readonly, nonatomic) float layerScale;
@property (readonly, nonatomic) float layerRotation;

- (id)initWithLayer:(id)a0;
- (id)materialID;
- (BOOL)updateMaterialID:(id)a0;
- (id)text;
- (BOOL)updateText:(id)a0;
- (id)placeholder;
- (BOOL)isDisplayingDateTime;
- (BOOL)isDisplayingLocation;
- (unsigned long long)dateTimeDisplayOptions;
- (BOOL)updateTimestampWithDate:(id)a0;
- (BOOL)updateLocationWithGeoInfo:(id)a0;
- (void)updateLayerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLayerScale:(float)a0;
- (void)updateLayerRotation:(float)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
