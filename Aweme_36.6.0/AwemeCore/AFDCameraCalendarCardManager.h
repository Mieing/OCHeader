@class NSString, AWEAwemeModel;
@protocol AWEFeedCreationCardControllerProtocol;

@interface AFDCameraCalendarCardManager : NSObject <AWEUserMessage, AFDCameraCalendarCardManagerProtocol>

@property (nonatomic) BOOL isFetching;
@property (weak, nonatomic) id<AWEFeedCreationCardControllerProtocol> creationCardController;
@property (retain, nonatomic) AWEAwemeModel *cardModel;
@property (nonatomic) long long configInsertPosition;
@property (nonatomic) long long lastActualInsertPosition;
@property (nonatomic) long long insetWithOtherCard;
@property (nonatomic) BOOL insertInProcess;
@property (nonatomic) BOOL insertSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)indexOfAweme:(id)a0 inDataSource:(id)a1;
+ (id)sharedManager;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)configCreationCardController:(id)a0;
- (void)fetchCameraCalendarCardWithCompletion:(id /* block */)a0;
- (void)clearCardData;
- (BOOL)isCameraCalendarEnabled;
- (BOOL)isCameraCalendarAlreadyShow;
- (void)insertCreationCard:(id)a0 atIndex:(long long)a1;
- (BOOL)checkPositionAvailable:(long long)a0 dataSource:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
