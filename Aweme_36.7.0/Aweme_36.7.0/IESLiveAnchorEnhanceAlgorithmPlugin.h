@interface IESLiveAnchorEnhanceAlgorithmPlugin : IESLiveAnchorBizPlugin

+ (BOOL)pluginShouldActive;

- (id)subscribeMessages;
- (void)liveRoomWillDealloc;

@end
