@class NSString;

@interface WKKryptonDefaultVideoPlayerDelegate : NSObject <WKKryptonVideoPlayerDelegate> {
    void *_context;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onVideoStatusChanged:(long long)a0;
- (void)onVideoStatusChanged:(long long)a0 withMessage:(id)a1;
- (id)initWithVideoPlayerContext:(void *)a0;

@end
