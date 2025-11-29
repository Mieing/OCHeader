@class NSString;

@interface AWEUGFollowGuideModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *guideTag;
@property (retain, nonatomic) NSString *labelText;
@property (nonatomic) long long triggerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)triggerTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
