@class NSString;

@interface AWEPublishEditVideoRequestModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *originalVid;
@property (copy, nonatomic) NSString *musicInfo;
@property (copy, nonatomic) NSString *userVoiceAudioInfo;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
