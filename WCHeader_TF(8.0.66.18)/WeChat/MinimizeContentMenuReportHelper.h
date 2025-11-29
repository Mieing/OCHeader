@class NSString;

@interface MinimizeContentMenuReportHelper : NSObject

@property (copy, nonatomic) NSString *viewId;
@property (nonatomic) long long scene;
@property (nonatomic) unsigned long long btnRow;
@property (nonatomic) unsigned long long btnIndex;

- (id)initWithViewId:(id)a0 scene:(long long)a1 btnRow:(unsigned long long)a2 btnIdex:(unsigned long long)a3;
- (id)initWithViewId:(id)a0 scene:(long long)a1 btnReranged:(BOOL)a2;
- (void)onExp;
- (void)onClick;
- (void).cxx_destruct;

@end
