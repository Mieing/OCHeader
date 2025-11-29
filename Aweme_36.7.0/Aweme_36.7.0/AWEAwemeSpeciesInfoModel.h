@class NSNumber, NSString, AWEURLModel;

@interface AWEAwemeSpeciesInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *speciesID;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
