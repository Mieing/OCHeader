@class NSString, NSMutableDictionary;

@interface MMLimitedModeDataPB : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *agreenAuthorizationDic;
@property (retain, nonatomic) NSMutableDictionary *becomeGuardianDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_agreenAuthorizationDic;
+ (void)PBArrayAdd_becomeGuardianDic;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
