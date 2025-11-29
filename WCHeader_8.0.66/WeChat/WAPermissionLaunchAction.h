@class NSString;

@interface WAPermissionLaunchAction : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int actionCode;
@property (retain, nonatomic) NSString *openURL;
@property (nonatomic) BOOL isUpdateHistoryList;
@property (retain, nonatomic) NSString *alertMsg;
@property (retain, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *migrateTargetAppid;
@property (copy, nonatomic) NSString *retryPageShowMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_actionCode;
+ (void)PBArrayAdd_openURL;
+ (void)PBArrayAdd_isUpdateHistoryList;
+ (void)PBArrayAdd_alertMsg;
+ (void)PBArrayAdd_alertTitle;
+ (void)PBArrayAdd_migrateTargetAppid;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
