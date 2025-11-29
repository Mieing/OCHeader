@class NSString, WCAppAuthAuthInfo, WCAppAuthAppMetaInfo;

@interface WCAppAuthDataItem : MMObject <PBCoding>

@property (retain, nonatomic) WCAppAuthAppMetaInfo *appInfo;
@property (retain, nonatomic) WCAppAuthAuthInfo *authInfo;
@property (copy, nonatomic) NSString *tips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appInfo;
+ (void)PBArrayAdd_authInfo;
+ (void)PBArrayAdd_tips;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithAuthAppPBData:(id)a0;
- (id)getScopes;
- (void)updateScope:(id)a0 state:(unsigned int)a1;
- (id)genAuthInfoDescription;
- (id)genAuthInfoScopeList;
- (BOOL)hasUnEditableScope;
- (void).cxx_destruct;

@end
