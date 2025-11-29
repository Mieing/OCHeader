@class NSString;

@interface WCFinderBusinessCurrentRedDotInfo : NSObject

@property (copy, nonatomic) NSString *redDotTipsUuid;
@property (nonatomic) BOOL hasRedDot;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) unsigned long long localReceiveMsTimeStamp;
@property (nonatomic) BOOL isIgnore;
@property (nonatomic) long long count;
@property (nonatomic) long long exposeCount;
@property (nonatomic) unsigned long long firstExposeTime;
@property (nonatomic) unsigned long long lastExposeTimeStamp;
@property (nonatomic) unsigned long long lastEndExposeTimeStamp;

- (id)genReportJson;
- (void).cxx_destruct;

@end
