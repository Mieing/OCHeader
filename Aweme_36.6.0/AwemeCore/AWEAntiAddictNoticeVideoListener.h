@class NSString;

@interface AWEAntiAddictNoticeVideoListener : NSObject <AWEAntiAddictActionListener>

@property (copy, nonatomic) id /* block */ triggerBeginBlock;
@property (copy, nonatomic) id /* block */ triggerEndBlock;
@property (copy, nonatomic) id /* block */ triggerRevokeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)listenerType;
- (void)feedDidDisplayAntiAddictVideo:(id)a0;
- (void)feedDidRevokeAntiAddictVideo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
