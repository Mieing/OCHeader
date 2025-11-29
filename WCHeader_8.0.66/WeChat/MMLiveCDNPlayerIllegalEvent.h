@class NSArray, NSString;

@interface MMLiveCDNPlayerIllegalEvent : NSObject

@property (nonatomic) unsigned long long occurTimestampMs;
@property (retain, nonatomic) NSArray *itemInfos;
@property (nonatomic) unsigned long long illegalType;
@property (readonly, nonatomic) NSString *illegalDescription;
@property (readonly, nonatomic) NSString *logDescription;

- (id)initWithItemInfos:(id)a0 illegalType:(unsigned long long)a1;
- (BOOL)isSameWithEvent:(id)a0;
- (id)toReportDictionary;
- (void)report;
- (void).cxx_destruct;

@end
