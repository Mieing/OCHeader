@class NSString;

@interface AWESearchVoiceTranslateExtraInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long audioDuration;
@property (copy, nonatomic) NSString *searchExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
