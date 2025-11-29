@class NSArray, NSString;

@interface AWEHPTopTabEditModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *tabList;
@property (nonatomic) long long timeStamp;
@property (nonatomic) BOOL isEditedTopTabs;
@property (nonatomic) BOOL isEditedBottomTabs;
@property (copy, nonatomic) NSString *bottomReplaceTab;
@property (copy, nonatomic) NSArray *editTypes;
@property (retain, nonatomic) NSArray *editPreTabList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)editPreTabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
