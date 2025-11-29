@class AWEECOMIMMsgFoldABConfig;

@interface AWEECOMIMMsgFoldFinalABConfig : NSObject

@property (retain, nonatomic) AWEECOMIMMsgFoldABConfig *normalAB;
@property (retain, nonatomic) AWEECOMIMMsgFoldABConfig *precisionAB;
@property (retain, nonatomic) AWEECOMIMMsgFoldABConfig *validAB;
@property (nonatomic) BOOL usingPrecisionAB;
@property (readonly, nonatomic) BOOL featureEnable;

+ (id)finalABConfigFromAB;

- (BOOL)featureEnable;
- (BOOL)foldEnableWithFoldGroupKey:(id)a0;
- (id)initWithNormalAB:(id)a0 precisionAB:(id)a1;
- (void).cxx_destruct;

@end
