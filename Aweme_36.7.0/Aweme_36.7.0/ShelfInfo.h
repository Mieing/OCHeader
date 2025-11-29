@class ShelfMicroAppInfo, NSString, NSArray, NSMutableDictionary, NSMutableArray;

@interface ShelfInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *localSellingPoint;
@property (nonatomic) unsigned long long addType;
@property (copy, nonatomic) NSString *mpPosition;
@property (nonatomic) BOOL isFromMemory;
@property (copy, nonatomic) NSString *openExtra;
@property (copy, nonatomic) NSString *entryPagePath;
@property (copy, nonatomic) NSString *addingPageLiveStatus;
@property (copy, nonatomic) NSString *mpLiveChannel;
@property (nonatomic) BOOL isMountingFromMissionTab;
@property (copy, nonatomic) NSString *missionCourseId;
@property (copy, nonatomic) NSString *nativeAppMountMissionID;
@property (copy, nonatomic) NSArray *missionPayloadList;
@property (retain, nonatomic) ShelfMicroAppInfo *appInfo;
@property (nonatomic) BOOL hasAppInfo;
@property (retain, nonatomic) NSMutableArray *cardInfoListArray;
@property (readonly, nonatomic) unsigned long long cardInfoListArray_Count;
@property (nonatomic) long long startId;
@property (nonatomic) int source;
@property (nonatomic) int status;
@property (nonatomic) int punishStatus;
@property (nonatomic) int mountType;
@property (copy, nonatomic) NSString *clientExtra;
@property (nonatomic) int coexistRoom;
@property (nonatomic) int coexistKaAnchor;
@property (copy, nonatomic) NSString *coexistLogExtra;
@property (retain, nonatomic) NSMutableDictionary *startPageQuery;
@property (readonly, nonatomic) unsigned long long startPageQuery_Count;
@property (copy, nonatomic) NSString *imExtra;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *shelfInfoToken;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

- (BOOL)isFromMemory;
- (void)setIsFromMemory:(BOOL)a0;
- (id)nativeAppMountMissionID;
- (id)entryPagePath;
- (id)mpPosition;
- (void)setAddingPageLiveStatus:(id)a0;
- (void)setAddType:(unsigned long long)a0;
- (id)explainingCardInfo;
- (id)numberOfSellingPointCard;
- (BOOL)hasProductCard;
- (id)addingPageLiveStatus;
- (id)copyShelfInfo;
- (id)openExtra;
- (id)mpLiveChannel;
- (id)initWithMemoryData:(id)a0;
- (BOOL)isMountingFromMissionTab;
- (unsigned long long)addType;
- (void)setMpLiveChannel:(id)a0;
- (void)multiAddShelfInfo:(id)a0;
- (id)initWithShelfInfoDictionary:(id)a0;
- (void)deleteSelectedShelfInfo:(id)a0;
- (id)injectCategoryToShelfInfo:(id)a0;
- (id)memoryDataInString;
- (id)missionPayloadList;
- (id)initWithTaskBoxInfo:(id)a0;
- (void)setNativeAppMountMissionID:(id)a0;
- (void)setMissionCourseId:(id)a0;
- (void)setMissionPayloadList:(id)a0;
- (void)setIsMountingFromMissionTab:(BOOL)a0;
- (void)setLocalSellingPoint:(id)a0;
- (id)localSellingPoint;
- (void)setOpenExtra:(id)a0;
- (void)setEntryPagePath:(id)a0;
- (void)setMpPosition:(id)a0;
- (id)missionCourseId;
- (unsigned long long)mountTypeWithParams:(id)a0;
- (BOOL)isCardInfoListEqualTo:(id)a0;

@end
