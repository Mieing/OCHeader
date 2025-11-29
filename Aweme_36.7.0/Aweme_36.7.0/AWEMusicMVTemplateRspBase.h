@class NSString;

@interface AWEMusicMVTemplateRspBase : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long receivedAt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
