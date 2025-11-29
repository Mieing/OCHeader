@class NSString, NSMutableArray;

@interface GameChatReporter : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>

@property (retain, nonatomic) NSMutableArray *reportQueue;
@property (nonatomic) BOOL isReporting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reportUnreadState:(unsigned int)a0;
- (void)doReport;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
