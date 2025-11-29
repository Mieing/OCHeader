@class NSString, NSArray;

@interface AWESearchProfileSideBarModuleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *moduleType;
@property (copy, nonatomic) NSString *moduleTitle;
@property (retain, nonatomic) NSArray *items;
@property (nonatomic) double moduleHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
