@class NSString, WCFinderRedDotFrequencyInfo, NSMutableDictionary;

@interface WCFinderRedDotBusinessReportModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long businessType;
@property (copy, nonatomic) NSString *redDotId;
@property (nonatomic) long long accRedDotExpStartTime;
@property (nonatomic) long long accRedDotExpCnt;
@property (nonatomic) long long accRedDotBanCnt;
@property (nonatomic) BOOL isClick;
@property (nonatomic) BOOL isClickWithRedDot;
@property (nonatomic) long long stayTimeMs;
@property (nonatomic) long long backStayTimeMs;
@property (readonly, nonatomic) BOOL hasRedDot;
@property (retain, nonatomic) WCFinderRedDotFrequencyInfo *frequencyInfo;
@property (nonatomic) long long cleanAccNType;
@property (retain, nonatomic) NSMutableDictionary *extInfoDic;
@property (nonatomic) double ctrValue;

+ (BOOL)enableReportLimitInfoFromPath:(id)a0;
+ (long long)calcRemainAccNValueFromExptCnt:(long long)a0 accStage:(long long)a1 path:(id)a2 businessType:(unsigned long long)a3;
+ (long long)calcRemainPunishMValueFromBanCnt:(long long)a0 punishStage:(long long)a1 path:(id)a2 businessType:(unsigned long long)a3;

- (id)initWithPath:(id)a0 businessType:(unsigned long long)a1;
- (id)genReportInfo;
- (void).cxx_destruct;

@end
