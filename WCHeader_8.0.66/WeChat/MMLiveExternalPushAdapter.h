@interface MMLiveExternalPushAdapter : MMLiveTRTCPushAdapter

- (BOOL)canStartLocalCapture;
- (void)startLocalVideo;
- (void)switchVideoSourceTo:(unsigned long long)a0;
- (void)enableCustomVideoCapture:(BOOL)a0;

@end
