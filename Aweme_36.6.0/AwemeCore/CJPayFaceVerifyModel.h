@class NSDictionary, NSNumber;

@interface CJPayFaceVerifyModel : JSONModel

@property (copy, nonatomic) NSDictionary *faceVerifyFullPageBg;
@property (copy, nonatomic) NSDictionary *faceVerifyFullPageMiddleTitleIcon;
@property (copy, nonatomic) NSDictionary *faceVerifyScanGif;
@property (retain, nonatomic) NSNumber *scanViewYOffset;
@property (retain, nonatomic) NSNumber *scanViewRadius;
@property (nonatomic) BOOL protocolCheckedOnDefalut;
@property (nonatomic) BOOL cashierMultiForbidden;
@property (nonatomic) long long additionalCountdown;
@property (retain, nonatomic) NSNumber *callbackDelay;
@property (copy, nonatomic) NSDictionary *resultConfig;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
