@class NSString;

@interface DBContactOpenIM : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSString *openIMDescId;
@property (nonatomic) unsigned int customInfoVisible;
@property (retain, nonatomic) NSString *customInfo;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSString *exposedId;
@property (retain, nonatomic) NSString *customToolBarInfo;
@property (nonatomic) unsigned int enterpriseAuthStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_customInfoVisible;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_exposedId;
+ (void)PBArrayAdd_customToolBarInfo;
+ (void)PBArrayAdd_enterpriseAuthStatus;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
