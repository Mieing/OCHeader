@class NSString, AWECodeGenAiFollowVideoModel, AWECodeGenAiFollowImageModel, NSDictionary;

@interface AWEAIFollowShootModel : AWEBaseBizConfigModel

@property (nonatomic) BOOL isAIFollowShoot;
@property (copy, nonatomic) NSString *commonEffeftID;
@property (retain, nonatomic) AWECodeGenAiFollowVideoModel *followVideoModel;
@property (retain, nonatomic) AWECodeGenAiFollowImageModel *followImageModel;
@property (copy, nonatomic) NSString *awemeID;
@property (readonly, nonatomic) BOOL isFollowVideo;
@property (readonly, copy, nonatomic) NSString *followEffectID;
@property (copy, nonatomic) NSDictionary *passThroughParams;
@property (nonatomic) long long createBodyPetCount;
@property (nonatomic) long long createBodyFaceCount;
@property (nonatomic) long long createBodyAge;
@property (copy, nonatomic) NSString *createBodyGender;
@property (nonatomic) long long createBodyImageWidth;
@property (nonatomic) long long createBodyImageHeight;
@property (nonatomic) BOOL isAIFollowShootByAudioDriven;
@property (copy, nonatomic) NSString *followMusicID;

+ (id)genderTextWithCheckModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getAICreationButtonTitle;
- (void)setInfoWithCreateBodyCheckModel:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
