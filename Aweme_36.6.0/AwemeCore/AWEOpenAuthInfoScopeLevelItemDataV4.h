@class NSString, NSArray, NSDictionary;

@interface AWEOpenAuthInfoScopeLevelItemDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoScopeLevelItemDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *content;
@property (nonatomic) BOOL canSkipConfirm;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL hideScopeDesc;
@property (nonatomic) BOOL canUserSelect;
@property (nonatomic) BOOL canShowAccount;
@property (copy, nonatomic) NSDictionary *noAuthScope;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
