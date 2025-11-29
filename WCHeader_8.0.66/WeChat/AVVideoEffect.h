@interface AVVideoEffect : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) float skinSmooth;
@property (nonatomic) float skinBright;
@property (nonatomic) float eyeBigger;
@property (nonatomic) float eyeBright;
@property (nonatomic) float faceThin;
@property (nonatomic) float backgroundBlur;
@property (nonatomic) float eyebrowEnhance;
@property (nonatomic) float eyePouch;
@property (nonatomic) float smileFolds;
@property (nonatomic) float sharpenFilter;
@property (nonatomic) float smallHead;
@property (nonatomic) float teethBright;
@property (nonatomic) float wingOfNose;
@property (nonatomic) float lowerJawbone;
@property (nonatomic) float cheekBone;
@property (nonatomic) float naturalFilter;

+ (id)effectWithABTestKey:(id)a0;
+ (id)defaultEffect;

@end
