@class NSDictionary, NSString;

@interface AWESharePlatformTargetTypeSDKSetting : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long shareType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
