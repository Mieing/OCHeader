@interface WCMomentsPostReportEditActionDetail : NSObject <NSCopying> {
    BOOL _isFinished;
    double _actionStartTime;
    double _actionEndTime;
}

@property (readonly, nonatomic) long long action;
@property (readonly, nonatomic) BOOL isPage;
@property (readonly, nonatomic) unsigned long long actionDuration;

+ (BOOL)isPageAction:(long long)a0;

- (id)initWithAction:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)onActionFinished;

@end
