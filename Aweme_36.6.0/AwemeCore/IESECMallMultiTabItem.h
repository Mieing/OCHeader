@class NSString, NSDictionary;

@interface IESECMallMultiTabItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *tabTitle;
@property (nonatomic) long long tabContainerType;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) long long tabOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isMallShoppingTab;
- (void).cxx_destruct;

@end
