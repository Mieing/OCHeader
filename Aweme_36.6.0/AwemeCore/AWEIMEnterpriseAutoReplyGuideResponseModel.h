@class NSString, AWEIMEnterpriseAutoReplyGuideDetailModel;

@interface AWEIMEnterpriseAutoReplyGuideResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMEnterpriseAutoReplyGuideDetailModel *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailJSONAdapter;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
