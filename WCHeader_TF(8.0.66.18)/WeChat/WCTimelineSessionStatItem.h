@class NSString, NSMutableDictionary, NSMutableArray;

@interface WCTimelineSessionStatItem : MMObject <NSCopying>

@property (nonatomic) unsigned int pId;
@property (retain, nonatomic) NSString *pName;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *formSessionId;
@property (nonatomic) unsigned int seq;
@property (nonatomic) unsigned long long frontTime;
@property (nonatomic) unsigned long long scrollTotalTime;
@property (nonatomic) unsigned long long stayTotalTime;
@property (retain, nonatomic) NSMutableDictionary *reportFeedDic;
@property (nonatomic) unsigned long long lastEnterTimelinePageTime;
@property (nonatomic) unsigned long long lastExitTimelinePageTime;
@property (nonatomic) unsigned long long lastCalcTime;
@property (nonatomic) double lastCalcOffsetY;
@property (nonatomic) unsigned long long lastCalcOffsetTime;
@property (nonatomic) BOOL lastStayed;
@property (nonatomic) BOOL isReport;
@property (nonatomic) unsigned long long scrollTotalCostTime;
@property (nonatomic) unsigned long long scrollOriginalTotalCostTime;
@property (nonatomic) unsigned int scrollTotalCount;
@property (nonatomic) unsigned int scrollErrorCount;
@property (retain, nonatomic) NSMutableArray *adSessionIDs;
@property (retain, nonatomic) NSMutableArray *nextPageLocations;

- (id)init;
- (id)toString;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
