@class NSString;

@interface AWELeftSideBarDynamicItemHighValueAppModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonMsg;
@property (copy, nonatomic) NSString *buttonSchema;
@property (copy, nonatomic) NSString *highValueExtra;
@property (nonatomic) BOOL undertakeInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)aweAppPresenterAction_key;
- (void).cxx_destruct;

@end
