@class NSArray, NSString;

@interface AWEIMSendUserBizActionResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *exitNetWorkInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitNetworkInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
