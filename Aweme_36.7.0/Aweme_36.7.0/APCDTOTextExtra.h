@class NSString, APCDTOUser, APCDTOTextExtraExtension;

@interface APCDTOTextExtra : MTLModel <AWEStudioComposerModelExtension, MTLJSONSerializing>

@property (retain, nonatomic) APCDTOTextExtraExtension *extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (nonatomic) long long type;
@property (retain, nonatomic) APCDTOUser *user;
@property (copy, nonatomic) NSString *hashtag;
@property (copy, nonatomic) NSString *awemeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)awemeExtraValue;
- (void).cxx_destruct;

@end
