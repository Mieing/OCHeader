@class AWEDistributionFinishInfo, NSString, NSDictionary, AWEDistributionReportInfo;

@interface AWEDistributionUndertakeDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *task_id;
@property (copy, nonatomic) NSString *task_interaction_type;
@property (copy, nonatomic) NSString *task_token;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) AWEDistributionFinishInfo *finish;
@property (retain, nonatomic) AWEDistributionReportInfo *reportInfo;
@property (retain, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
