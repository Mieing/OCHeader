@class NSString, NSArray, NSDictionary;

@interface AWELiveShelfClassifyTabItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *tabKey;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *productList;
@property (copy, nonatomic) NSDictionary *trackingParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
