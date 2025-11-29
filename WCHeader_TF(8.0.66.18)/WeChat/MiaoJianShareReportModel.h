@class NSString;

@interface MiaoJianShareReportModel : WCTimeline3rdShareBaseReporter

@property (retain, nonatomic) NSString *localID;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *publicID;
@property (nonatomic) unsigned int outcome;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned int templateType;

- (void)bindDataItem:(id)a0;
- (void)updateOutcome:(unsigned int)a0 serverItem:(id)a1 localItem:(id)a2;
- (BOOL)isSupport:(id)a0;
- (BOOL)containKey:(id)a0 inDict:(id)a1;
- (unsigned int)uintOfStringValKey:(id)a0 inDict:(id)a1;
- (void).cxx_destruct;

@end
