@class NSString, NSMutableDictionary;

@interface WAMainListReporter : WAReportBaseItem

@property (retain, nonatomic) NSMutableDictionary *exposureItemMap;
@property (nonatomic) long long vcDidShowTime;
@property (nonatomic) long long opType;
@property (nonatomic) long long iconType;
@property (readonly, nonatomic) long long stayDuration;
@property (nonatomic) long long opLocation;
@property (retain, nonatomic) NSString *appUin;
@property (readonly, nonatomic) long long appCount;
@property (nonatomic) long long reportSessionId;

+ (id)createWithOperateType:(long long)a0 sessionId:(long long)a1;

- (void)report;
- (void)markDidShowMainListVC;
- (void)markDidHiddenMainListVC;
- (void)markDidExposureItemByAppId:(id)a0;
- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
