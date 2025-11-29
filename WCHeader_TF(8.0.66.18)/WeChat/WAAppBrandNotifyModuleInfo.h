@class NSString, NSMutableArray, NSMutableDictionary;

@interface WAAppBrandNotifyModuleInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *arrModuleList;
@property (retain, nonatomic) NSString *enteranceModule;
@property (retain, nonatomic) NSMutableDictionary *dicModuleState;
@property (retain, nonatomic) NSMutableArray *chatToolList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_arrModuleList;
+ (void)PBArrayAdd_enteranceModule;
+ (void)PBArrayAdd_dicModuleState;
+ (void)PBArrayAdd_chatToolList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isUseModule;
- (id)moduleListContainJSONDictionary;
- (void).cxx_destruct;

@end
