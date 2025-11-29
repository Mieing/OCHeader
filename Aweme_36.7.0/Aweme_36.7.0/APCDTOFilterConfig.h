@class NSString;

@interface APCDTOFilterConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *filterId;
@property (nonatomic) double filterIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
