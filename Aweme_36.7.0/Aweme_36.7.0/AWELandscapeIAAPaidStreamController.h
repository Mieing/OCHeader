@class NSString;
@protocol AWEPaidStreamControlProtocol;

@interface AWELandscapeIAAPaidStreamController : AWELandscapeInteractionBaseController <AWEPaidStreamControlDelegate>

@property (retain, nonatomic) id<AWEPaidStreamControlProtocol> paidStreamControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 updatePlayTime:(double)a1 canPlayTime:(double)a2 totalTime:(double)a3;
- (void)didEnterLandscape;
- (void)willExitLandscape;
- (BOOL)usePaidStream:(id)a0;
- (void)preparePaidStream;
- (BOOL)usePaidStreamPreventScreenRecord;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)dealloc;

@end
