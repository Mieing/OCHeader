@class NSArray, NSSet, NSString;

@interface AWEECOMIMQuickEntryModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *operationList;
@property (copy, nonatomic) NSSet *shouldRemoveItemTypeArrays;
@property (nonatomic) BOOL localData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
