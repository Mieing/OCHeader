@class NSArray, AWELeftSideBarDynamicItemLinkTitleAppModel, NSString;

@interface AWELeftSideBarDynamicDataAppModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCacheData;
@property (copy, nonatomic) NSArray *data;
@property (copy, nonatomic) NSArray *highValueList;
@property (retain, nonatomic) AWELeftSideBarDynamicItemLinkTitleAppModel *linkTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)highValueListJSONTransformer;
+ (id)linkTitleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
