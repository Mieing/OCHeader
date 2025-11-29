@class NSString;

@interface AWEDTOMusicVolumeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL voiceOn;
@property (nonatomic) double voiceVolume;
@property (nonatomic) double bgmVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
