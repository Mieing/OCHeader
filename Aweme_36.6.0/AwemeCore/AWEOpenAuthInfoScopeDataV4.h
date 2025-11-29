@class NSString, NSDictionary, NSArray;

@interface AWEOpenAuthInfoScopeDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoScopeDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL containsInvalidScope;
@property (copy, nonatomic) NSDictionary *scopeInfoMap;
@property (copy, nonatomic) NSArray *authorizedScopes;
@property (copy, nonatomic) NSString *cancelScopeNotice;
@property (copy, nonatomic) NSDictionary *textMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
