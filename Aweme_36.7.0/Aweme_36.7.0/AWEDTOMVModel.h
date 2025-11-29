@class NSString, NSArray;

@interface AWEDTOMVModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *slideshowMvId;
@property (nonatomic) long long templateType;
@property (copy, nonatomic) NSString *mvId;
@property (copy, nonatomic) NSArray *musicIds;
@property (copy, nonatomic) NSArray *materials;
@property (copy, nonatomic) NSArray *serverMaterialData;
@property (nonatomic) BOOL isPhotoMvMode1080p;
@property (nonatomic) BOOL isRedPacketMv;
@property (copy, nonatomic) NSString *tip;
@property (copy, nonatomic) NSString *templateMusicIdIos;
@property (copy, nonatomic) NSString *musicFilePath;
@property (nonatomic) BOOL enableMvOriginAudio;
@property (nonatomic) long long materialMaxCount;
@property (nonatomic) long long materialMinCount;
@property (copy, nonatomic) NSString *mvChallengeName;
@property (copy, nonatomic) NSArray *localAlgorithmMaterials;
@property (copy, nonatomic) NSString *mvEntrance;
@property (copy, nonatomic) NSString *mvSource;
@property (nonatomic) long long mvLocation;
@property (copy, nonatomic) NSString *mvTab;
@property (copy, nonatomic) NSArray *mvExtraInfo;
@property (copy, nonatomic) NSString *mvRequestId;
@property (copy, nonatomic) NSString *originMvId;
@property (nonatomic) BOOL isMediaTemplate;
@property (copy, nonatomic) NSString *videocutGroupId;
@property (copy, nonatomic) NSArray *mvChallengeNameArray;
@property (copy, nonatomic) NSString *mvDetailType;
@property (copy, nonatomic) NSString *imageTemplateId;
@property (copy, nonatomic) NSString *imageTemplateSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverMaterialDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
