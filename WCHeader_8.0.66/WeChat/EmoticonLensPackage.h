@class EmoticonLensPackageConfig, NSArray, NSString, UIColor;

@interface EmoticonLensPackage : NSObject

@property (retain, nonatomic) EmoticonLensPackageConfig *config;
@property (retain, nonatomic) NSArray *lensItems;
@property (retain, nonatomic) NSString *packagePath;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) UIColor *subtitleColor;
@property (readonly, nonatomic) UIColor *strokeColor;
@property (readonly, nonatomic) long long previewSize;
@property (readonly, nonatomic) BOOL hasSegment;
@property (readonly, nonatomic) NSArray *actionTypes;

+ (id)unpackLensPackage:(id)a0 toTargetDir:(id)a1;

- (id)initWithPackageDir:(id)a0;
- (void)applyToEffectManager:(id)a0;
- (void)setAutoAdjust:(BOOL)a0;
- (long long)actionType;
- (id)initWithConfig:(id)a0 lensItems:(id)a1;
- (void).cxx_destruct;

@end
