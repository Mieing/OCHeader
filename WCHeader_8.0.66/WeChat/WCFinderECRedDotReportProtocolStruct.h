@class NSString, NSDate;

@interface WCFinderECRedDotReportProtocolStruct : NSObject

@property (retain, nonatomic) NSString *redDotTipsUuid;
@property (nonatomic) unsigned long long redDotCtrlType;
@property (retain, nonatomic) NSString *redDotShowInfoPath;
@property (retain, nonatomic) NSString *redDotShowInfoParentPath;
@property (nonatomic) unsigned long long redDotShowInfoType;
@property (nonatomic) unsigned long long redDotShowInfoCountNum;
@property (retain, nonatomic) NSString *redDotShowInfoTitle;
@property (nonatomic) unsigned long long redDotAction;
@property (retain, nonatomic) NSDate *redDotActionTimestamp;
@property (nonatomic) unsigned long long receiveRedDotTimeStamp;
@property (retain, nonatomic) NSString *redDotShowInfoIconUrl;
@property (nonatomic) unsigned long long innerVersion;
@property (retain, nonatomic) NSString *reportExtInfo;

- (id)reportParams;
- (id)toReportString;
- (void).cxx_destruct;

@end
