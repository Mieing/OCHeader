@class NSString;

@interface APCDTOHotspot : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *hotspotId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
