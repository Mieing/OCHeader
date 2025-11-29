@class NSNumber, NSString;

@interface AWEShopAssistModel : MTLModel <MTLJSONSerializing, AWEShopAssistModelProtocol>

@property (retain, nonatomic) NSNumber *hintID;
@property (copy, nonatomic) NSString *hintString;
@property (copy, nonatomic) NSString *shopAssistLinkUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
