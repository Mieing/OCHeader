@class NSArray, NSString;

@interface AWECoverTextPackage : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long layoutType;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) long long paddingStart;
@property (nonatomic) long long paddingEnd;
@property (nonatomic) long long paddingTop;
@property (nonatomic) long long paddingBottom;
@property (nonatomic) double rotation;
@property (retain, nonatomic) NSArray *textConfigs;
@property (copy, nonatomic) NSString *effectPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
