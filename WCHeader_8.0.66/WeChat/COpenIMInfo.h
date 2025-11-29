@class NSArray, NSString;

@interface COpenIMInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSArray *customItems;
@property (retain, nonatomic) NSArray *customToolBarItems;
@property (retain, nonatomic) NSString *openIMDescId;
@property (nonatomic) unsigned int customInfoVisible;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int resSubType;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSString *exposedId;
@property (retain, nonatomic) NSString *customInfo;
@property (nonatomic) unsigned int kefuType;
@property (retain, nonatomic) NSString *customToolBarInfo;
@property (nonatomic) unsigned int enterpriseAuthStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_customInfoVisible;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_resSubType;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_exposedId;
+ (void)PBArrayAdd_kefuType;
+ (void)PBArrayAdd_customToolBarInfo;
+ (void)PBArrayAdd_enterpriseAuthStatus;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
