@class NSString;

@interface AWEAdPlayableAudioInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL shouldMute;
@property (copy, nonatomic) NSString *audioUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
