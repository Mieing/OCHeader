@class NSString;

@interface OMJBeautyAdjustmentDesc : NSObject

@property (retain, nonatomic) NSString *materialID;
@property (retain, nonatomic) NSString *presetID;
@property (nonatomic) float skinSmoothness;
@property (nonatomic) float twowayBrightRate;
@property (nonatomic) float faceSlimness;
@property (nonatomic) float eyeEnhancement;
@property (nonatomic) float eyeBrightness;
@property (nonatomic) float headShrinkage;
@property (nonatomic) float cheekShrinkage;
@property (nonatomic) float cheekboneShrinkage;
@property (nonatomic) float jawShrinkage;
@property (nonatomic) float noseShrinkage;
@property (nonatomic) float darkCircleReduction;
@property (nonatomic) float smileFoldReduction;
@property (nonatomic) float teethWhiteness;
@property (nonatomic) float redLip;
@property (nonatomic) float lipShape;
@property (nonatomic) float contouringRate;
@property (nonatomic) float clarity;
@property (nonatomic) float noseTip;
@property (nonatomic) float nasalRoot;
@property (nonatomic) float noseWing;
@property (nonatomic) float eyelidDownStrength;
@property (nonatomic) float eyeDistanceFactor;
@property (nonatomic) float browThickness;
@property (nonatomic) float browDistance;
@property (nonatomic) float browPeak;
@property (nonatomic) float innerEyeCorner;
@property (nonatomic) float faceNarrowness;
@property (nonatomic) float foreheadShrinkage;
@property (nonatomic) float makeupEyeLashAndLine;
@property (nonatomic) float makeupEyeShadow;
@property (nonatomic) float makeupEyeBrow;
@property (nonatomic) float makeupLip;
@property (nonatomic) float makeupBlusher;
@property (nonatomic) float makeupContour;
@property (nonatomic) BOOL isBeautyEnabled;

+ (id)nullBeautyAdjustmentDesc;
+ (id)classicBeautyAdjustmentDesc;
+ (id)naturalBeautyAdjustmentDesc;
+ (id)godBeautyAdjustmentDesc;
+ (id)goddessBeautyAdjustmentDesc;

- (id)initWithBeautyAdjustmentDesc:(id)a0;
- (id)initWithBackingDesc:(const void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
