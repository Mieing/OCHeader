@class NSString;

@interface IESLiveCloudCollaborateUpdateAudioModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rtcUid;
@property (nonatomic) BOOL mute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
