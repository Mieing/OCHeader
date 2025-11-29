@interface TXBeautyManager : NSObject {
    struct BeautyInterface { void /* function */ **x0; } *_beautyInterface;
}

+ (int)convertStyle:(long long)a0;

- (void)setBeautyInterface:(struct BeautyInterface { void /* function */ **x0; } *)a0;
- (void)setBeautyStyle:(long long)a0;
- (void)setBeautyLevel:(float)a0;
- (void)setWhitenessLevel:(float)a0;
- (void)enableSharpnessEnhancement:(BOOL)a0;
- (void)setRuddyLevel:(float)a0;
- (void)setFilter:(id)a0;
- (void)setFilterStrength:(float)a0;
- (int)setGreenScreenFile:(id)a0;
- (int)setEyeScaleLevel:(float)a0;
- (int)setFaceSlimLevel:(float)a0;
- (int)setFaceVLevel:(float)a0;
- (int)setChinLevel:(float)a0;
- (int)setFaceShortLevel:(float)a0;
- (int)setFaceNarrowLevel:(float)a0;
- (int)setNoseSlimLevel:(float)a0;
- (int)setEyeLightenLevel:(float)a0;
- (int)setToothWhitenLevel:(float)a0;
- (int)setWrinkleRemoveLevel:(float)a0;
- (int)setPounchRemoveLevel:(float)a0;
- (int)setSmileLinesRemoveLevel:(float)a0;
- (int)setForeheadLevel:(float)a0;
- (int)setEyeDistanceLevel:(float)a0;
- (int)setEyeAngleLevel:(float)a0;
- (int)setMouthShapeLevel:(float)a0;
- (int)setNoseWingLevel:(float)a0;
- (int)setNosePositionLevel:(float)a0;
- (int)setLipsThicknessLevel:(float)a0;
- (int)setFaceBeautyLevel:(float)a0;
- (void)setMotionTmpl:(id)a0 inDir:(id)a1;
- (void)selectMotionTemplate:(id)a0;
- (void)setMotionMute:(BOOL)a0;
- (void)setBeautyLowComplexity:(BOOL)a0;

@end
