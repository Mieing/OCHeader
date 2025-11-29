@class AWEYAPEntranceContext, NSString;

@interface AWEPayOuterPayEntranceHandler : NSObject <AWEYAPEntranceHandlerProtocol>

@property (retain, nonatomic) AWEYAPEntranceContext *context;
@property (nonatomic) BOOL isTeenModeTimeLockPause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canHandleContext:(id)a0;

- (void)event:(id)a0 params:(id)a1;
- (void)p_handleTeenModeTimeLockPause:(id)a0;
- (void)p_handleTeenModeTimeLockShow:(id)a0;
- (void)endCurrEntrance;
- (void)startEntrance;
- (void)doBeforeWindowInit;
- (BOOL)needPreProcess:(unsigned long long)a0;
- (void)didPreProcess:(unsigned long long)a0 withData:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
