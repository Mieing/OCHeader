@class NSString, NSMutableArray, WCYoWindowController;

@interface WCWatchNotificationMgr : MMUserService <WCYoDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *yoCounts;
@property (retain, nonatomic) WCYoWindowController *yoWindowController;
@property (copy, nonatomic) NSString *isShowingUsername;
@property (nonatomic) unsigned int yoTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceEnterForeground;
- (id)getYoWindow;
- (void)displaySignalMessage:(id)a0;
- (void)addYoCount:(unsigned long long)a0 contact:(id)a1 type:(int)a2;
- (void)dequeue;
- (void)prepareToCloseYoWindow;
- (void)dismissYoWindow;
- (void)didHitOutside;
- (void)didHitInside;
- (void).cxx_destruct;

@end
