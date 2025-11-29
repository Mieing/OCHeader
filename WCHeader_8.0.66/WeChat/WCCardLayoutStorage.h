@class NSString, CardsHomePageList, SecEntranceCardList, NSMutableArray;

@interface WCCardLayoutStorage : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *expiringList;
@property (retain, nonatomic) NSMutableArray *memberCardList;
@property (retain, nonatomic) NSMutableArray *nearbyList;
@property (retain, nonatomic) NSMutableArray *recentList;
@property (retain, nonatomic) NSMutableArray *labelList;
@property (retain, nonatomic) NSMutableArray *firstList;
@property (retain, nonatomic) NSString *layoutBuff;
@property (nonatomic) BOOL bShowLayoutRed;
@property (nonatomic) unsigned int layoutRedEndTime;
@property (retain, nonatomic) NSString *layoutTip;
@property (nonatomic) unsigned int layoutUpdateTime;
@property (retain, nonatomic) NSString *entrySubTitle;
@property (nonatomic) unsigned int topScene;
@property (retain, nonatomic) CardsHomePageList *cardsHomePageList;
@property (nonatomic) unsigned int homePageCardNum;
@property (retain, nonatomic) SecEntranceCardList *secEntranceCardList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_expiringList;
+ (void)PBArrayAdd_memberCardList;
+ (void)PBArrayAdd_nearbyList;
+ (void)PBArrayAdd_layoutBuff;
+ (void)PBArrayAdd_bShowLayoutRed;
+ (void)PBArrayAdd_layoutRedEndTime;
+ (void)PBArrayAdd_layoutTip;
+ (void)PBArrayAdd_layoutUpdateTime;
+ (void)PBArrayAdd_entrySubTitle;
+ (void)PBArrayAdd_topScene;
+ (void)PBArrayAdd_recentList;
+ (void)PBArrayAdd_cardsHomePageList;
+ (void)PBArrayAdd_homePageCardNum;
+ (void)PBArrayAdd_secEntranceCardList;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
