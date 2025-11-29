@class NSString;

@interface WCAppAuthScopeInfoItem : MMObject <PBCoding>

@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *scopeDesc;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL isUserEnable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_scope;
+ (void)PBArrayAdd_scopeDesc;
+ (void)PBArrayAdd_state;
+ (void)PBArrayAdd_isUserEnable;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
