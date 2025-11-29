@class NSString, NSArray, NSDictionary;

@interface AWEPublishVideoSyncAppModel : MTLModel <NSCopying, MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *tagName;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *clientKeys;
@property (copy, nonatomic) NSDictionary *oldVersionFields;
@property (nonatomic) BOOL selected;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
