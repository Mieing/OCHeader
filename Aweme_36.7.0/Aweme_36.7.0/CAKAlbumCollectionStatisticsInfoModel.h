@class NSString;

@interface CAKAlbumCollectionStatisticsInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *timeGranularity;
@property (copy, nonatomic) NSString *theme;
@property (copy, nonatomic) NSString *aggregateStragety;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithCodeGenModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
