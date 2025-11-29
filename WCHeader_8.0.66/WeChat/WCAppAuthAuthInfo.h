@class NSString, NSMutableArray;

@interface WCAppAuthAuthInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *scopes;
@property (nonatomic) unsigned int allScopeState;
@property (nonatomic) unsigned int isShowAllscope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_scopes;
+ (void)PBArrayAdd_allScopeState;
+ (void)PBArrayAdd_isShowAllscope;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithAuthAppPBData:(id)a0;
- (id)init;
- (id)getScopes;
- (void)updateScope:(id)a0 state:(unsigned int)a1;
- (id)getScopeItemByIdentifier:(id)a0;
- (void).cxx_destruct;

@end
