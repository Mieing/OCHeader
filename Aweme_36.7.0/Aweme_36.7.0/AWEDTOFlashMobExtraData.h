@class NSString;

@interface AWEDTOFlashMobExtraData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *flashMobId;
@property (copy, nonatomic) NSString *flashMobTitle;
@property (nonatomic) BOOL autoTitle;
@property (nonatomic) BOOL isFollowShoot;
@property (copy, nonatomic) NSString *flashMobSpeakId;
@property (nonatomic) BOOL isUseMusic;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
