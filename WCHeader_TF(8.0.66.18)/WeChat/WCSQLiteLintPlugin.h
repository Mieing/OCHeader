@protocol WCSQLiteLintDataSourceDelegate;

@interface WCSQLiteLintPlugin : MatrixPlugin

@property (weak, nonatomic) id<WCSQLiteLintDataSourceDelegate> deleagte;

+ (id)getTag;

- (id)init;
- (void)installSQLiteLintOnDB:(id)a0;
- (void)uninstallSQLiteLintOnDB:(id)a0;
- (void)setWhiteList:(id)a0 forDB:(id)a1;
- (BOOL)shouldCheck:(id)a0 onDatabase:(id)a1;
- (void)notifyExcution:(id)a0 withCost:(double)a1 onDB:(id)a2;
- (id)getStackInfo;
- (struct function<void (const char *, std::vector<sqlitelint::Issue>)> { struct __value_func<void (const char *, std::vector<sqlitelint::Issue>)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })getIssueCallback;
- (struct function<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)> { struct __value_func<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })getSQLiteExcutionCallback;
- (id)getReportDataFromIssue:(void *)a0;
- (void).cxx_destruct;

@end
