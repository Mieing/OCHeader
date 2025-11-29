@class NSString;

@interface AWEPOIFeedStyleModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long dataListStyle;
@property (nonatomic) unsigned long long titleUIStyle;
@property (nonatomic) unsigned long long titleHiddenStyle;
@property (nonatomic) unsigned long long maskViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)JSONValue;

@end
