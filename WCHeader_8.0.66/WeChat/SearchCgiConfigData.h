@class NSString, NSMutableDictionary;

@interface SearchCgiConfigData : NSObject <PBCoding>

@property (retain, nonatomic) NSString *searchID;
@property (nonatomic) unsigned int baseTime;
@property (nonatomic) unsigned int expiredTime;
@property (nonatomic) unsigned int clientVersion;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) NSString *lang;
@property (retain, nonatomic) NSMutableDictionary *dicData;
@property (retain, nonatomic) NSMutableDictionary *dicWSConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_searchID;
+ (void)PBArrayAdd_baseTime;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_clientVersion;
+ (void)PBArrayAdd_h5Version;
+ (void)PBArrayAdd_lang;
+ (void)PBArrayAdd_dicData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)updateWSConfig;
- (void)reset;
- (void)setCurrentContext;
- (BOOL)checkValid;
- (BOOL)checkLangValid;
- (void).cxx_destruct;

@end
