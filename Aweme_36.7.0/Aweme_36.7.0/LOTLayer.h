@class UIColor, NSString, NSArray, LOTKeyframeGroup, NSNumber, LOTAsset;

@interface LOTLayer : NSObject

@property (readonly, nonatomic) NSString *layerName;
@property (readonly, nonatomic) NSString *referenceID;
@property (readonly, nonatomic) NSNumber *layerID;
@property (readonly, nonatomic) long long layerType;
@property (readonly, nonatomic) NSNumber *parentID;
@property (readonly, nonatomic) NSNumber *startFrame;
@property (readonly, nonatomic) NSNumber *inFrame;
@property (readonly, nonatomic) NSNumber *outFrame;
@property (readonly, nonatomic) NSNumber *timeStretch;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layerBounds;
@property (readonly, nonatomic) NSArray *shapes;
@property (readonly, nonatomic) NSArray *masks;
@property (readonly, nonatomic) NSNumber *layerWidth;
@property (readonly, nonatomic) NSNumber *layerHeight;
@property (readonly, nonatomic) UIColor *solidColor;
@property (readonly, nonatomic) LOTAsset *imageAsset;
@property (readonly, nonatomic) LOTKeyframeGroup *opacity;
@property (readonly, nonatomic) LOTKeyframeGroup *timeRemapping;
@property (readonly, nonatomic) LOTKeyframeGroup *rotation;
@property (readonly, nonatomic) LOTKeyframeGroup *position;
@property (readonly, nonatomic) LOTKeyframeGroup *positionX;
@property (readonly, nonatomic) LOTKeyframeGroup *positionY;
@property (readonly, nonatomic) LOTKeyframeGroup *anchor;
@property (readonly, nonatomic) LOTKeyframeGroup *scale;
@property (readonly, nonatomic) long long matteType;

- (void)_mapFromJSON:(id)a0 withAssetGroup:(id)a1 withFramerate:(id)a2;
- (id)initWithJSON:(id)a0 withAssetGroup:(id)a1 withFramerate:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
