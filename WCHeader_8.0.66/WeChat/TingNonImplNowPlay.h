@class NSString;

@interface TingNonImplNowPlay : NSObject <TingNowPlayingModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPlayingInfoUpdate:(id)a0;

@end
