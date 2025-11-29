@class NSString, NSArray, NSMutableDictionary, NSMutableSet;

@interface SolitaireObj : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) NSString *nsSolitaireHeader;
@property (retain, nonatomic) NSString *nsSolitaireTail;
@property (retain, nonatomic) NSString *nsExample;
@property (retain, nonatomic) NSString *nsSeparator;
@property (retain, nonatomic) NSString *nsActiveUserName;
@property (retain, nonatomic) NSString *nsChatName;
@property (retain, nonatomic) NSString *nsIdentifier;
@property (retain, nonatomic) NSString *nsContent;
@property (retain, nonatomic) NSArray *arrNewItems;
@property (nonatomic) BOOL bJustSendPlainText;
@property (nonatomic) BOOL bNeedAddOccupyWhenTapTips;
@property (nonatomic) BOOL isActived;
@property (nonatomic) BOOL hasHeader;
@property (nonatomic) BOOL isCreateType;
@property (nonatomic) BOOL canQuickShowTips;
@property (nonatomic) BOOL bFromCallLaunch;
@property (nonatomic) unsigned int matchCount;
@property (nonatomic) unsigned int activeTime;
@property (nonatomic) long long firstSvrId;
@property (nonatomic) unsigned long long editScene;
@property (nonatomic) unsigned long long activeScene;
@property (retain, nonatomic) NSMutableDictionary *dicSolitaireItem;
@property (retain, nonatomic) NSMutableSet *invalidSolitaireKeySet;
@property (retain, nonatomic) NSMutableDictionary *dicInvalidMsg;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_nsSolitaireHeader;
+ (void)PBArrayAdd_nsSolitaireTail;
+ (void)PBArrayAdd_nsExample;
+ (void)PBArrayAdd_nsSeparator;
+ (void)PBArrayAdd_nsActiveUserName;
+ (void)PBArrayAdd_nsChatName;
+ (void)PBArrayAdd_hasHeader;
+ (void)PBArrayAdd_isCreateType;
+ (void)PBArrayAdd_canQuickShowTips;
+ (void)PBArrayAdd_matchCount;
+ (void)PBArrayAdd_dicSolitaireItem;
+ (void)PBArrayAdd_invalidSolitaireKeySet;
+ (void)PBArrayAdd_activeTime;
+ (void)PBArrayAdd_firstSvrId;
+ (void)PBArrayAdd_dicInvalidMsg;
+ (void)PBArrayAdd_activeScene;
+ (void)PBArrayAdd_nsIdentifier;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getSolitaireKey;
- (BOOL)editContentIFInSameNumWith:(id)a0 Item:(id)a1;
- (id)getDiffNewAndMergeItemsWithContents:(id)a0;
- (void)addInvalidMsgWithItem:(id)a0;
- (void)invalidAllItem;
- (void)addSolitaireItemsWithSolitaireInfo:(id)a0;
- (id)getSolitaireResultWithNewLine:(BOOL)a0;
- (id)getRangeWithContent:(id)a0;
- (void)fixSolitaireInfo;
- (void)fixExampleInfo;
- (void)fixHeaderInfo;
- (id)getSolitaireXmlInfo;
- (void)mergeNewItems;
- (id)genSortItemsWithNewArr:(BOOL)a0;
- (BOOL)updateDicSolitaireItemByArray:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateSelfInfoWithSolitaireObj:(id)a0;
- (unsigned int)getCreateTime;
- (void).cxx_destruct;

@end
