@class NSString, NSArray;

@interface AWEDTOEditInsertPropParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *propId;
@property (nonatomic) BOOL autoOpenPanel;
@property (nonatomic) BOOL autoApply;
@property (copy, nonatomic) NSArray *customPropIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
