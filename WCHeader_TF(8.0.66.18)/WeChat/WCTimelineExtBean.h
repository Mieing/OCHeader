@class WCMomentsInputAreaReportInfo, WCTimelineInputAction, ECShareFromInfo, NSString, SnsExtSpamInfoMsg, SnsExtStatData, EcsShareSnsInfo, NSMutableArray;

@interface WCTimelineExtBean : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) WCTimelineInputAction *inputAction;
@property (retain, nonatomic) SnsExtStatData *snsExtStatData;
@property (retain, nonatomic) NSMutableArray *uploadResponseRetCodeArr;
@property (retain, nonatomic) SnsExtSpamInfoMsg *snsExtSpamInfo;
@property (retain, nonatomic) ECShareFromInfo *ecShareInfo;
@property (nonatomic) long long springContentStyle;
@property (nonatomic) BOOL isTigerEnabled;
@property (retain, nonatomic) WCMomentsInputAreaReportInfo *inputAreaReportInfo;
@property (retain, nonatomic) EcsShareSnsInfo *ecsShareInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_inputAction;
+ (void)PBArrayAdd_snsExtStatData;
+ (void)PBArrayAdd_uploadResponseRetCodeArr;
+ (void)PBArrayAdd_isTigerEnabled;
+ (void)PBArrayAdd_springContentStyle;
+ (void)PBArrayAdd_snsExtSpamInfo;
+ (void)PBArrayAdd_ecShareInfo;
+ (void)PBArrayAdd_ecsShareInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)ensureInputAction;
- (id)ensureSnsExtStatData;
- (id)ensureUploadResponseRetCodeArr;
- (id)ensureSnsExtSpamInfo;
- (id)ensureECShareInfo;
- (void).cxx_destruct;

@end
