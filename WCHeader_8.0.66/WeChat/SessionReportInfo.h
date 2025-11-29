@class EnterReportInfo, NSMutableDictionary, ExitReportInfo;

@interface SessionReportInfo : MMObject <NSCopying>

@property (retain, nonatomic) EnterReportInfo *enterInfo;
@property (retain, nonatomic) ExitReportInfo *exitInfo;
@property (retain, nonatomic) NSMutableDictionary *reddotInfo;
@property (nonatomic) unsigned long long maxCostMs;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)report:(unsigned long long)a0;
- (id)checkToGenExtraInfo;
- (id)description;
- (void)clear;
- (void).cxx_destruct;

@end
