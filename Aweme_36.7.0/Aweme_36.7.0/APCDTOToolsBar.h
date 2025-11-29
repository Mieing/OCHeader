@class NSArray, NSString;

@interface APCDTOToolsBar : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *allowList;
@property (copy, nonatomic) NSArray *blockList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
