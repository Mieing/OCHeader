@class NSString, NSArray, NSMutableArray;

@interface WAAppBrandNotifyModuleItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) BOOL independent;
@property (retain, nonatomic) NSArray *aliasList;
@property (retain, nonatomic) NSString *withoutLibMd5;
@property (retain, nonatomic) NSMutableArray *arrPluginCodeInfo;
@property (retain, nonatomic) NSString *debugUrl;
@property (retain, nonatomic) NSMutableArray *arrWidgetInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_independent;
+ (void)PBArrayAdd_aliasList;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_debugUrl;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
