@class NSString, NSMutableArray;

@interface MMTemplateMsgScopeCache : MMObject <PBCoding, NSCopying>

@property (copy, nonatomic) NSString *userName;
@property (nonatomic) BOOL isGlobalRecv;
@property (retain, nonatomic) NSMutableArray *scopeList;
@property (nonatomic) BOOL hasSettingEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_isGlobalRecv;
+ (void)PBArrayAdd_scopeList;
+ (void)PBArrayAdd_hasSettingEntry;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getScopeItemWithScopeID:(id)a0;
- (id)showInSettingScopeList;
- (void).cxx_destruct;

@end
