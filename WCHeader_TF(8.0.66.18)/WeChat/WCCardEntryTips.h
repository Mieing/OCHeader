@class NSString;

@interface WCCardEntryTips : MMObject <PBCoding>

@property (nonatomic) BOOL bShowNew;
@property (nonatomic) BOOL bShowRedDot;
@property (retain, nonatomic) NSString *nsRedDotBuff;
@property (retain, nonatomic) NSString *nsTipWording;
@property (retain, nonatomic) NSString *nsTipIconUrl;
@property (retain, nonatomic) NSString *nsCardId;
@property (nonatomic) BOOL bNeedCheck;
@property (nonatomic) BOOL bShowEntryNew;
@property (nonatomic) BOOL bShowEntryRedDot;
@property (nonatomic) BOOL bShowMeRedDot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bShowNew;
+ (void)PBArrayAdd_bShowRedDot;
+ (void)PBArrayAdd_nsRedDotBuff;
+ (void)PBArrayAdd_nsTipWording;
+ (void)PBArrayAdd_nsTipIconUrl;
+ (void)PBArrayAdd_nsCardId;
+ (void)PBArrayAdd_bNeedCheck;
+ (void)PBArrayAdd_bShowEntryNew;
+ (void)PBArrayAdd_bShowEntryRedDot;
+ (void)PBArrayAdd_bShowMeRedDot;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)saveToCache;
- (void)loadFromCache;
- (id)pathForCache;
- (void).cxx_destruct;

@end
