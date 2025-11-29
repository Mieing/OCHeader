@class NSString, NSDate;

@interface AWEUserRateManager : NSObject <AWEUserRateManagerProtocol>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSDate *lastTapTime;
@property (copy, nonatomic) NSString *remindText;
@property (copy, nonatomic) NSString *detailURL;
@property (nonatomic) long long rateRecordId;
@property (nonatomic) long long showDetailCountLimit;
@property (nonatomic) long long showDaysLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)updateUserRateData:(id)a0;
- (id)getNowDate;
- (id)getUserInfoWithUserId:(id)a0;
- (void)clearStorageInfo;
- (void)updateStorageWith:(id)a0;
- (void)resetUserRateData;
- (BOOL)shouldShowUserRateView;
- (void)userRateCloseWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
