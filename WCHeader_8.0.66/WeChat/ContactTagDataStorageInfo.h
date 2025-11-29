@class NSString, NSMutableArray;

@interface ContactTagDataStorageInfo : NSObject <PBCoding>

@property (nonatomic) BOOL bIsHadMigrateContactTagData;
@property (nonatomic) BOOL bIsHadMigrateTagContactList;
@property (retain, nonatomic) NSMutableArray *arrMigrateTagContactUserName;
@property (retain, nonatomic) NSMutableArray *arrRecentlyUsedTagID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bIsHadMigrateContactTagData;
+ (void)PBArrayAdd_bIsHadMigrateTagContactList;
+ (void)PBArrayAdd_arrMigrateTagContactUserName;
+ (void)PBArrayAdd_arrRecentlyUsedTagID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
