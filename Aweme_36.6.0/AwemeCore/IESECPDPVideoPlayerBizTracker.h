@class NSString;

@interface IESECPDPVideoPlayerBizTracker : NSObject <IESECPDPVideoPlayerDelegateProtocol>

@property (nonatomic) BOOL isAutoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pdpPlayer:(id)a0 didChangeStateTo:(unsigned long long)a1 preState:(unsigned long long)a2;
- (void)pdpPlayer:(id)a0 didChangePlayTimeTo:(double)a1 totalTime:(double)a2;
- (void)pdpPlayer:(id)a0 didChangeMuteStateTo:(BOOL)a1;
- (void)pdpPlayer:(id)a0 didChangeProgressSlidingStateTo:(BOOL)a1;
- (void)pdpPlayer:(id)a0 didChangePlaceholderImageHiddenStatusTo:(BOOL)a1;
- (void)pdpPlayer:(id)a0 didChangeControlElementHiddenStatusTo:(BOOL)a1;
- (void)pdpPlayerDidTapMuteIcon:(id)a0 changeMuteStatusTo:(BOOL)a1;
- (void)pdpPlayerDidTapPlayIcon:(id)a0 changePlayStatusTo:(BOOL)a1;
- (void)pdpPlayerDidShowOnScreen:(id)a0;
- (id)init;

@end
