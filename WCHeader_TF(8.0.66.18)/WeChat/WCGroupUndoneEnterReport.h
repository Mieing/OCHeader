@interface WCGroupUndoneEnterReport : WCGroupUndoneBaseReport

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int exitType;

+ (void)DoGroupUndoneEnterReportWithItem:(id)a0 scene:(unsigned int)a1;

- (void)report;

@end
