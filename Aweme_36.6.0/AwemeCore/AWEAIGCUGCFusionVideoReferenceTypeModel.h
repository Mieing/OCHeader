@class NSString;

@interface AWEAIGCUGCFusionVideoReferenceTypeModel : AWEBaseSettingsModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *referenceType;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *disableToast;
@property (copy, nonatomic) NSString *createBodyDisableToast;
@property (nonatomic) BOOL needAudioTrack;
@property (nonatomic) BOOL needSinglePerson;
@property (nonatomic) BOOL createBodyNeedSinglePerson;
@property (nonatomic) BOOL createBodyNeedSinglePet;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL disabled;
@property (nonatomic) unsigned long long disableReason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
