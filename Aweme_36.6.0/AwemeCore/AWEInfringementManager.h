@class NSString, NSDate;

@interface AWEInfringementManager : NSObject <AWEInfringementManagerProtocol>

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSDate *lastTapTime;
@property (copy, nonatomic) NSString *infringementReportId;
@property (copy, nonatomic) NSString *remindText;
@property (copy, nonatomic) NSString *detailURL;
@property (nonatomic) long long showDetailCountLimit;
@property (nonatomic) long long showDaysLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)getNowDate;
- (id)getUserInfoWithUserId:(id)a0;
- (void)clearStorageInfo;
- (void)resetInfringementData;
- (void)updateStorageWith:(id)a0;
- (BOOL)shouldShowInfringementView;
- (void)infringementCloseWithType:(unsigned long long)a0;
- (void)updateInfringementData:(id)a0;
- (void).cxx_destruct;

@end
