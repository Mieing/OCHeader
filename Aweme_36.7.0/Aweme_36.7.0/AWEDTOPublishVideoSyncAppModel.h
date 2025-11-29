@class NSString, NSArray, NSDictionary;

@interface AWEDTOPublishVideoSyncAppModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *clientKeys;
@property (copy, nonatomic) NSDictionary *oldVersionField;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *tagName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
