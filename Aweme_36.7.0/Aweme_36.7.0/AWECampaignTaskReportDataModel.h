@class NSArray, NSString;

@interface AWECampaignTaskReportDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *schemaList;
@property (retain, nonatomic) NSArray *popSchemaList;
@property (retain, nonatomic) NSArray *instanceList;
@property (copy, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
