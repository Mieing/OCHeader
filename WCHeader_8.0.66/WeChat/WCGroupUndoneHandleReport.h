@interface WCGroupUndoneHandleReport : WCGroupUndoneBaseReport

@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int exitType;

+ (void)DoGroupUndoneHandleReportWithItem:(id)a0 actionType:(unsigned int)a1 exitType:(unsigned int)a2;

- (void)report;

@end
