@class NSString;

@interface EnterpriseMemberItem : MMObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsContactDisplayName;
@property (nonatomic) unsigned long long m_uiContactVer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsUsrName;
+ (void)PBArrayAdd_m_nsContactDisplayName;
+ (void)PBArrayAdd_m_uiContactVer;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
