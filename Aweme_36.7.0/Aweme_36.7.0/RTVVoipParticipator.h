@class RTVVoipParticipantBizExt, NSString, NSDictionary, RTVVoipFeatures, RTVVoipParticipatorLocalInfo;
@protocol RTVVoipRingtoneMusicModelProtocol, Optional;

@interface RTVVoipParticipator : JSONModel <RxPrimaryKey>

@property (copy, nonatomic) NSString *userIMID;
@property (nonatomic) long long status;
@property (nonatomic) BOOL recording;
@property (nonatomic) BOOL isHoster;
@property (nonatomic) BOOL cameraOff;
@property (nonatomic) BOOL micOff;
@property (retain, nonatomic) NSString<Optional> *voipTraceSessionId;
@property (retain, nonatomic) NSString<Optional> *voipOSId;
@property (nonatomic) unsigned long long audioVolume;
@property (retain) RTVVoipFeatures *features;
@property (retain, nonatomic) RTVVoipParticipantBizExt *bizExt;
@property (copy, nonatomic) NSString<Optional> *extString;
@property (nonatomic) long long participatorType;
@property (copy, nonatomic) NSString<Optional> *avatarURLString;
@property (copy, nonatomic) NSString<Optional> *displayName;
@property (copy, nonatomic) NSDictionary<Optional> *extInfo;
@property (retain, nonatomic) id<RTVVoipRingtoneMusicModelProtocol, Optional> ringtone;
@property (readonly, copy, nonatomic) NSDictionary *ext;
@property (readonly, nonatomic) BOOL feedWindow;
@property (readonly, nonatomic) RTVVoipParticipatorLocalInfo *localInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;

- (id)getInKey;
- (id)initWithUserID:(id)a0 status:(long long)a1 isHoster:(BOOL)a2;
- (id)initWithUserID:(id)a0 status:(long long)a1 isHoster:(BOOL)a2 type:(long long)a3;
- (void)applyWithParticipator:(id)a0;
- (void)updateMicOff:(BOOL)a0;
- (void)updateAudioVolum:(unsigned long long)a0;
- (void)applyOtherParticipantFeatures:(id)a0;
- (void)updateRecording:(BOOL)a0;
- (void)updateParticipatorType:(long long)a0;
- (void)updateCameraOff:(BOOL)a0;
- (void)updateLocalInfo:(id)a0;
- (void)setFeaturesWithNSString:(id)a0;
- (id)JSONObjectForFeatures;
- (void)setBizExtWithNSString:(id)a0;
- (id)JSONObjectForBizExt;
- (void)updateState:(long long)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)updateStatus:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrentUser;

@end
