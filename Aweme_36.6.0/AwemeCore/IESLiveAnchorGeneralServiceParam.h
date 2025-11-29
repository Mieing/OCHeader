@class IESLiveExecutionMessageDispatcher, IESLiveAnchorContext;

@interface IESLiveAnchorGeneralServiceParam : IESLiveGeneralServiceLaunchParam

@property (weak, nonatomic) IESLiveExecutionMessageDispatcher *messageDispatcher;
@property (retain, nonatomic) IESLiveAnchorContext *context;
@property (nonatomic) BOOL isNewAnchorLive;

- (void).cxx_destruct;

@end
