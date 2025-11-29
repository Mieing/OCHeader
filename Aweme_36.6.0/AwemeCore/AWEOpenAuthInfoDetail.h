@class AWEOpenAuthInfoClientInfo, NSDictionary, NSString, AWEOpenAuthInfoAlertScope;

@interface AWEOpenAuthInfoDetail : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEOpenAuthInfoClientInfo *clientInfo;
@property (retain, nonatomic) AWEOpenAuthInfoAlertScope *alertScope;
@property (copy, nonatomic) NSDictionary *scopeMap;
@property (copy, nonatomic) NSDictionary *textMap;
@property (copy, nonatomic) NSDictionary *identityScopeState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInfoJSONTransformer;
+ (id)alertScopeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
