@class NSString, NSMutableArray, NSMutableDictionary;

@interface WCSessionFlowConfigModel : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *sessionsArray;
@property (retain) NSMutableDictionary *sessionsDicForPageName;
@property (retain) NSMutableDictionary *sessionsDicForSid;
@property (retain, nonatomic) NSString *originalJson;
@property (retain, nonatomic) NSMutableArray *blackListPages;
@property (retain, nonatomic) NSMutableArray *mainTabPages;
@property (retain, nonatomic) NSMutableArray *filterPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_sessionsArray;
+ (void)PBArrayAdd_blackListPages;
+ (void)PBArrayAdd_mainTabPages;
+ (void)PBArrayAdd_filterPages;
+ (void)PBArrayAdd_originalJson;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)initCacheDictionary;
- (id)toString;
- (void).cxx_destruct;

@end
