@interface OMJRecordingResultTraits : NSObject

@property (readonly, nonatomic) BOOL hasFaceSticker;
@property (readonly, nonatomic) BOOL hasOverlaySticker;
@property (readonly, nonatomic) BOOL has3DLayer;
@property (readonly, nonatomic) BOOL hasARFeature;
@property (readonly, nonatomic) BOOL hasSegmentationEffect;
@property (readonly, nonatomic) BOOL hasBeauty;
@property (readonly, nonatomic) BOOL hasMakeUp;
@property (readonly, nonatomic) unsigned long long faceTimePercentage;
@property (readonly, nonatomic) unsigned long long likelyDefective;

- (id)initWithHasFaceSticker:(BOOL)a0 hasOverlaySticker:(BOOL)a1 has3DLayer:(BOOL)a2 hasARFeature:(BOOL)a3 hasSegmentationEffect:(BOOL)a4 hasBeauty:(BOOL)a5 hasMakeUp:(BOOL)a6 faceTimePercentage:(unsigned long long)a7 likelyDefective:(unsigned long long)a8;
- (id)description;

@end
