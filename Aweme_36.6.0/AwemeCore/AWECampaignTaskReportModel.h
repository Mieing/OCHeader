@class NSString, AWECampaignTaskReportDataModel;

@interface AWECampaignTaskReportModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (retain, nonatomic) AWECampaignTaskReportDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
