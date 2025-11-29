@class NSString;

@interface APCDTOPublishSettings : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL visibleInPostList;
@property (nonatomic) long long downloadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (id)init;

@end
