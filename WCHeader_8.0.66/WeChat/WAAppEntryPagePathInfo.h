@class NSString;

@interface WAAppEntryPagePathInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *entryPagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_username;
+ (void)PBArrayAdd_entryPagePath;
+ (void)initialize;
+ (id)loadFromPath:(id)a0;
+ (BOOL)save:(id)a0 toPath:(id)a1;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
