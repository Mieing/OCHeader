@class NSString;

@interface AWEIMEmoticonModelAudioEmojiContext : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *audioUrl;
@property (copy, nonatomic) NSString *audioFileType;
@property (copy, nonatomic) NSString *audioMd5;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
