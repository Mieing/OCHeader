@class NSArray, NSString, NSDictionary, IESECListKitListModel;

@interface IESECShopDynamicTabDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *moduleWrapperList;
@property (copy, nonatomic) NSString *raw;
@property (copy, nonatomic) NSArray *components;
@property (copy, nonatomic) NSDictionary *block;
@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
