@interface WCGroupUndoneMsgOpReport : WCGroupUndoneBaseReport

@property (nonatomic) unsigned int exitType;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) BOOL isShowEdu;

+ (void)DoGroupUndoneMsgOpReportWithItem:(id)a0 actionType:(unsigned int)a1 exitType:(unsigned int)a2 isShowEdu:(BOOL)a3;

- (void)report;

@end
