@class NSString, NSArray;

@interface WAAppBrandNotifyChatToolItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *entryPagePath;
@property (retain, nonatomic) NSString *root;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSArray *supportedMaterials;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_entryPagePath;
+ (void)PBArrayAdd_root;
+ (void)PBArrayAdd_scopes;
+ (void)PBArrayAdd_supportedMaterials;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
