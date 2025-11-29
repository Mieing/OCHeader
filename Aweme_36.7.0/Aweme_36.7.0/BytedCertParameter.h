@class NSString, NSDictionary, NSData, NSArray;
@protocol BytedCertCustomUIDelegate;

@interface BytedCertParameter : NSObject <NSCopying>

@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *certAppId;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *flow;
@property (copy, nonatomic) NSString *ticket;
@property (nonatomic) BOOL useSystemV2;
@property (nonatomic) long long videoRecordPolicy;
@property (copy, nonatomic) NSString *livenessType;
@property (nonatomic) int youthCertScene;
@property (copy, nonatomic) NSDictionary *h5QueryParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *identityCode;
@property (copy, nonatomic) NSString *identityName;
@property (nonatomic) int beautyIntensity;
@property (retain, nonatomic) NSData *frontImageData;
@property (retain, nonatomic) NSData *backImageData;
@property (nonatomic) BOOL showAuthError;
@property (copy, nonatomic) NSArray *faceErrorPassCodes;
@property (nonatomic) BOOL backCamera;
@property (nonatomic) int faceAngleLimit;
@property (nonatomic) BOOL logMode;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSString *continueDetectionAlertText;
@property (copy, nonatomic) NSString *continueRetainTitle;
@property (copy, nonatomic) NSString *continueRetainNegativeBtn;
@property (copy, nonatomic) NSString *continueRetainPositiveBtn;
@property (copy, nonatomic) NSString *faceDetectionBgGifURL;
@property (copy, nonatomic) NSString *faceDetectionBgImageURL;
@property (copy, nonatomic) NSString *preDetectionTipText;
@property (nonatomic) BOOL disableFaceVCAnimation;
@property (weak, nonatomic) id<BytedCertCustomUIDelegate> bytedCertCustomUIDelegate;
@property (nonatomic) BOOL customLayout;
@property (nonatomic) BOOL facePromptAnimationEnable;
@property (nonatomic) BOOL facePromptAudioEnable;
@property (nonatomic) long long faceProgressBarOpt;
@property (nonatomic) unsigned long long viewControllerType;
@property (nonatomic) BOOL shouldCloseAfterSuccess;
@property (copy, nonatomic) NSDictionary *setCertStatusParams;
@property (copy, nonatomic) NSDictionary *closePageParams;
@property (nonatomic) double faceCircleRadius;
@property (nonatomic) double faceCircleCenterY;
@property (copy, nonatomic) NSDictionary *extraCustomFaceViewInfo;

- (id)initWithBaseParams:(id)a0 identityParams:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
