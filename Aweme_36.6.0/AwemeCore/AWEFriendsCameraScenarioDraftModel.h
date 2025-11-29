@class NSString, AWESocialCameraCustomConfiguration;

@interface AWEFriendsCameraScenarioDraftModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) AWESocialCameraCustomConfiguration *customConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)customConfigurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
