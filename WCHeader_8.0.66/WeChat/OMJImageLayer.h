@class OMCGeographicInfo, NSString, OMJImageScene, NSDate, OMJID;

@interface OMJImageLayer : NSObject

@property (readonly, nonatomic) struct SharedPtr<XISSegment> { struct XISSegment *x0; } backingSegment;
@property (readonly, weak, nonatomic) OMJImageScene *imageScene;
@property (readonly, nonatomic) OMJID *layerID;
@property (readonly, nonatomic) unsigned long long layerType;
@property (readonly, nonatomic) NSString *materialID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *placeholder;
@property (readonly, nonatomic) NSString *animatedImageFilePath;
@property (readonly, nonatomic) unsigned long long animatedImageEncoderType;
@property (readonly, nonatomic) unsigned long long timingFillMode;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) OMCGeographicInfo *geoInfo;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } layerPosition;
@property (readonly, nonatomic) float layerScale;
@property (readonly, nonatomic) float layerRotation;

- (id)initWithLayerID:(id)a0 imageScene:(id)a1;
- (void)syncOnImageSceneUpdated;
- (BOOL)updateStyleWithMaterialID:(id)a0;
- (BOOL)updateTitle:(id)a0;
- (BOOL)updateSubtitle:(id)a0;
- (unsigned long long)animatedImageDecoderType;
- (BOOL)replaceEmoticonWithFilePath:(id)a0 decoderType:(unsigned long long)a1 timingFillMode:(unsigned long long)a2;
- (BOOL)isDisplayingDateTime;
- (BOOL)isDisplayingLocation;
- (unsigned long long)dateTimeDisplayOptions;
- (BOOL)updateTimestampWithDate:(id)a0;
- (BOOL)updateLocationWithGeoInfo:(id)a0;
- (BOOL)updateLayerPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)updateLayerScale:(float)a0;
- (BOOL)updateLayerRotation:(float)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
