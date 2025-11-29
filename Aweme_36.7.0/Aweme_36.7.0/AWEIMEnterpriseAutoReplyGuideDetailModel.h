@class AWEIMEnterpriseAutoReplyGuideMessgaeModel, NSString;

@interface AWEIMEnterpriseAutoReplyGuideDetailModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMEnterpriseAutoReplyGuideMessgaeModel *messageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
