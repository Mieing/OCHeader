@class NSString;
@protocol KryptonStreamLoadDelegate;

@interface LynxKryptonResourceFetchDelegate : NSObject <LynxResourceStreamLoadDelegate>

@property (retain, nonatomic) id<KryptonStreamLoadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onData:(id)a0;
- (void)onStart:(long long)a0;
- (void).cxx_destruct;
- (void)onError:(id)a0;
- (void)onEnd;

@end
