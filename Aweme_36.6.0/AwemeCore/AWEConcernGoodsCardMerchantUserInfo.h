@class NSString, AWEURLModel;

@interface AWEConcernGoodsCardMerchantUserInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *secUid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIdJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
