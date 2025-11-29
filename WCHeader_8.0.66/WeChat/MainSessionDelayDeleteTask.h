@class MMSnackBar, MMSessionInfo;
@protocol MainSessionDelayDeleteTaskDelegate;

@interface MainSessionDelayDeleteTask : NSObject

@property (retain, nonatomic) MMSessionInfo *session;
@property (nonatomic) unsigned int lastMsgId;
@property (nonatomic) BOOL delayDeleteEnable;
@property (nonatomic) unsigned long long showSnackBarTime;
@property (retain, nonatomic) MMSnackBar *snackBar;
@property (weak, nonatomic) id<MainSessionDelayDeleteTaskDelegate> delegate;

+ (void)deleteSession:(id)a0;
+ (BOOL)isSessionCanReserve:(id)a0;

- (id)initWithDelayDeleteEnable:(BOOL)a0;
- (void)updateDeleteSession:(id)a0;
- (void)start;
- (void)cancel;
- (void)commit;
- (void)showSnackBarTips;
- (void)hideSnackBar;
- (void).cxx_destruct;

@end
