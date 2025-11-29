@class NSString, WSRedPointInfo, WSNumberRedPointList;

@interface WSRedPointCtrlInfo : NSObject <PBCoding>

@property (retain, nonatomic) WSRedPointInfo *searchRedPointInfo;
@property (retain, nonatomic) WSRedPointInfo *recommendFirstColumnRedPointInfo;
@property (nonatomic) unsigned int recommendClearedTimeStamps;
@property (nonatomic) unsigned int searchClearedTimeStamps;
@property (retain, nonatomic) WSNumberRedPointList *recommendNumRedPoints;
@property (retain, nonatomic) WSRedPointInfo *recommendSecondColumnRedPointInfo;
@property (nonatomic) unsigned int secondColumnClearedTimeStamps;
@property (retain, nonatomic) WSRedPointInfo *settingRedPointInfo;
@property (nonatomic) BOOL bContentReddotShowedInFindPage;
@property (retain, nonatomic) WSRedPointInfo *recommendThirdColumnRedPointInfo;
@property (nonatomic) unsigned int recommendThirdColumnClearedTimeStamps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_searchRedPointInfo;
+ (void)PBArrayAdd_recommendFirstColumnRedPointInfo;
+ (void)PBArrayAdd_recommendClearedTimeStamps;
+ (void)PBArrayAdd_searchClearedTimeStamps;
+ (void)PBArrayAdd_recommendNumRedPoints;
+ (void)PBArrayAdd_recommendSecondColumnRedPointInfo;
+ (void)PBArrayAdd_settingRedPointInfo;
+ (void)PBArrayAdd_secondColumnClearedTimeStamps;
+ (void)PBArrayAdd_bContentReddotShowedInFindPage;
+ (void)PBArrayAdd_recommendThirdColumnRedPointInfo;
+ (void)PBArrayAdd_recommendThirdColumnClearedTimeStamps;
+ (void)initialize;

@end
