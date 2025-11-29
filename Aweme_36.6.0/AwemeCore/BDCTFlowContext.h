@class BDCTLocalization, NSArray, NSDictionary, NSString, NSURL, NSMutableDictionary, BytedCertParameter;

@interface BDCTFlowContext : NSObject <NSCopying>

@property (retain, nonatomic) BytedCertParameter *parameter;
@property (readonly, copy, nonatomic) NSDictionary *baseParams;
@property (readonly, copy, nonatomic) NSDictionary *identityParams;
@property (readonly, copy, nonatomic) NSArray *sensitiveInfoKey;
@property (copy, nonatomic) NSString *finalVerifyChannel;
@property (copy, nonatomic) NSString *aliyunCertToken;
@property (copy, nonatomic) NSURL *videoRecordURL;
@property (copy, nonatomic) NSDictionary *liveDetectRequestParams;
@property (copy, nonatomic) NSString *finalLivenessType;
@property (copy, nonatomic) NSDictionary *authInfo;
@property (copy, nonatomic) NSDictionary *liveDetectAlgoConfig;
@property (readonly, nonatomic) BOOL needAuthFaceCompare;
@property (copy, nonatomic) NSDictionary *certResult;
@property (retain, nonatomic) NSString *faceEnvImageBase64;
@property (retain, nonatomic) NSMutableDictionary *flowTrackParams;
@property (nonatomic) BOOL isFinish;
@property (nonatomic) BOOL showProtectFaceLogo;
@property (nonatomic) BOOL voiceGuideServer;
@property (nonatomic) BOOL voiceGuideUser;
@property (copy, nonatomic) NSString *backendAuthVersion;
@property (copy, nonatomic) NSDictionary *actions;
@property (nonatomic) BOOL enableExtremeImg;
@property (copy, nonatomic) NSDictionary *backendDecision;
@property (readonly, nonatomic) BOOL liveDetectionOpt;
@property (copy, nonatomic) NSDictionary *serverEventParams;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) long long cameraType;
@property (nonatomic) BOOL createFaceVCOnly;
@property (retain, nonatomic) BDCTLocalization *localization;

+ (id)contextWithParameter:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
