@interface WCGroupUndoneShareReport : WCGroupUndoneBaseReport

@property (nonatomic) BOOL isOpenTodo;
@property (nonatomic) BOOL isShowEdu;
@property (nonatomic) unsigned int oper;

- (void)report;

@end
