@class NSString, AWESearchTabConfig;

@interface AWEEcommerceSearchTabVCConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *enterFromSource;
@property (copy, nonatomic) NSString *searchChannel;
@property (retain, nonatomic) AWESearchTabConfig *tabConfig;
@property (copy, nonatomic) NSString *ecommerceSubtabName;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) NSString *btmPageIdentifier;
@property (nonatomic) double collectionViewOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
