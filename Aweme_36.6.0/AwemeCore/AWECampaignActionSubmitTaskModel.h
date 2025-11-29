@class NSString, NSDictionary, AWECampaignSubmitTaskReqParams;

@interface AWECampaignActionSubmitTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *host;
@property (retain, nonatomic) AWECampaignSubmitTaskReqParams *reqParams;
@property (copy, nonatomic) NSDictionary *dicParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
