@class NSString, NSArray;

@interface AWESearchAIGCSharePanelPublishCoverViewModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) BOOL slowImageGenerated;
@property (nonatomic) BOOL isRequesting;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *coverItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
