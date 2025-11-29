@class FinderSyncTipsShowInfo, NSString, NSData, NSMutableArray;

@interface WCFinderTipsShowEntranceExtInfo : NSObject <PBCoding>

@property (copy, nonatomic) NSString *reportExtInfo;
@property (copy, nonatomic) NSString *tipsUuid;
@property (nonatomic) unsigned long long objectId;
@property (copy, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned int displayTabType;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSMutableArray *multiUsernames;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (retain, nonatomic) FinderSyncTipsShowInfo *bubbleInfo;
@property (nonatomic) int refreshStatus;
@property (nonatomic) int feedObjectType;
@property (nonatomic) long long snsFriendLikeCount;
@property (copy, nonatomic) NSString *localObjectId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_objectNonceId;
+ (void)PBArrayAdd_displayTabType;
+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_multiUsernames;
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_tabTipsByPassInfo;
+ (void)PBArrayAdd_bubbleInfo;
+ (void)PBArrayAdd_refreshStatus;
+ (void)PBArrayAdd_feedObjectType;
+ (void)PBArrayAdd_snsFriendLikeCount;
+ (void)PBArrayAdd_tipsUuid;
+ (void)PBArrayAdd_localObjectId;
+ (void)initialize;
+ (id)extInfoWith:(id)a0 tipsUuid:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)getPBPropertyTable;
- (BOOL)isVaildExtInfo;
- (id)checkToReturnExtReportDictionaryByCtrlExtInfo:(id)a0;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)a0;
- (BOOL)isSameTipsUuid:(id)a0;
- (void).cxx_destruct;

@end
