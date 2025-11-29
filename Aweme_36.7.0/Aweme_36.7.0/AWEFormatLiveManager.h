@interface AWEFormatLiveManager : HTSService <AWEFormatLiveInterface>

- (BOOL)isInFormatLive;
- (void)leaveFormatLive:(id)a0 force:(BOOL)a1;
- (unsigned long long)canEnterFormatLive:(id)a0;
- (id)init;

@end
