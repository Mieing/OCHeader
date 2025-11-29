@class NSDictionary, NSString, NSDate;

@interface AWEAntiAddictBaseAction : NSObject <AWEAntiAddictAction, AWEAntiAddictLogProtocol>

@property (retain, nonatomic) NSDictionary *preparedData;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) NSDate *expiredDate;
@property (readonly, nonatomic) BOOL triggerImmediately;
@property (readonly, nonatomic) long long listenerType;
@property (copy, nonatomic) id /* block */ endCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleName;

- (id)updatedDataOnPrepare;
- (id)updatedDataOnRevoke;
- (id)realUpdatedDataOnBegin;
- (id)realUpdatedDataOnEnd;
- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)willChangeToAction:(id)a0;
- (void)didChangeToAction:(id)a0;
- (void)willChangefromAction:(id)a0;
- (void)didChangefromAction:(id)a0;
- (id)initWithName:(id)a0 expiredDate:(id)a1 triggerImmediately:(BOOL)a2 listenerType:(long long)a3 PreparedData:(id)a4;
- (id)showedRecordMapByAppendRecord:(id)a0;
- (BOOL)isActionInActiveStatus;
- (void).cxx_destruct;
- (void)prepare;
- (void)begin;
- (void)end;
- (void)revoke;

@end
