@class NSString, NSDictionary, NSMutableSet, FMDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface AWEProfileExtensionAreaTheaterCardInfoManager : NSObject <AWEProfileExtensionAreaTheaterCardInfoManagerProtocol>

@property (retain, nonatomic) NSDictionary *guideInfoDictForTheater;
@property (retain, nonatomic) NSMutableSet *cardRedDotInfos;
@property (retain, nonatomic) NSString *dotShowedInNaturalDatInfo;
@property (nonatomic) BOOL showDot;
@property (copy, nonatomic) NSString *dbPath;
@property (copy, nonatomic) NSString *tabName;
@property (retain, nonatomic) FMDatabase *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)manager;

- (void)fetchTheaterGuideInfo;
- (void)fetchGuideInfoData;
- (BOOL)checkShowRedDotForCinemaPresenter:(id)a0 contentID:(id)a1;
- (id)getGuideInfoDictForTheater;
- (BOOL)isShowDot;
- (void)fetchDotDataFromDB:(id)a0 contentID:(id)a1;
- (id)theaterUpdateInfoWith:(id)a0 contendID:(id)a1;
- (void)insertTheaterDataToDB:(id)a0 contentID:(id)a1 dotShowInfo:(id)a2;
- (void)checkShowRedDotKey:(id)a0 contentID:(id)a1 completion:(id /* block */)a2;
- (void)updateDotShowInfoWithNatural;
- (void)showDot:(BOOL)a0;
- (void).cxx_destruct;

@end
