@class NSString;

@interface AWECampaignSubmitTaskReqParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
