@class NSURL;
@protocol APAccessDelegate;

@interface APAccess : APBase <PBMessageObserverDelegate>

@property (retain, nonatomic) NSURL *thirdPartyUrl;
@property (weak, nonatomic) id<APAccessDelegate> delegate;

- (void)dealloc;
- (id)initWithSsid:(id)a0 mac:(id)a1 thirdPartyUrl:(id)a2 delegate:(id)a3;
- (void)start;
- (void)cancel;
- (void)didSuccess;
- (void)didFail;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
