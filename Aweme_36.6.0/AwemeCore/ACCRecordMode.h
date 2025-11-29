@class NSString, ACCRecordAuthStatus, AWESwitchModeSingleTabConfig;

@interface ACCRecordMode : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isStoryStyleMode;
@property (readonly, nonatomic) BOOL isAdditionVideo;
@property (copy, nonatomic) id /* block */ additionIsVideoBlock;
@property (readonly, nonatomic) ACCRecordAuthStatus *authStatus;
@property (nonatomic) BOOL continueRecordWhenFingersAway;
@property (readonly, nonatomic) unsigned long long requiredPermission;
@property (nonatomic) long long modeId;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isPhoto;
@property (nonatomic) BOOL isMixHoldTapVideo;
@property (nonatomic) BOOL autoComplete;
@property (copy, nonatomic) NSString *trackIdentifier;
@property (nonatomic) long long lengthMode;
@property (nonatomic) long long buttonType;
@property (nonatomic) long long serverMode;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL isInitial;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL disablePhotoPressTapToVideo;
@property (weak, nonatomic) ACCRecordMode *parentMode;
@property (retain, nonatomic) AWESwitchModeSingleTabConfig *tabConfig;
@property (nonatomic) long long currentCaptureFrameRationType;
@property (nonatomic) BOOL showFrameCorner;
@property (nonatomic) long long recordType;
@property (readonly, nonatomic) long long customInputModeId;

- (long long)realBusinessModeId;
- (id)initWithRequiredPermission:(unsigned long long)a0;
- (BOOL)isNotesMode;
- (id)shootSourceWithModel:(id)a0;
- (void)configShootSourceForPictureMode:(id)a0;
- (void)configShootSourceForLightningMode:(id)a0;
- (void)configShootSourceForSegmentMode:(id)a0;
- (void)setCustomBusinessModeId:(long long)a0;
- (long long)getCurrentRealType;
- (BOOL)onlySupportTakePicture;
- (BOOL)onlySupportRecordVideo;
- (BOOL)supportTakePictureAndRecordVideo;
- (BOOL)supportShoot;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
