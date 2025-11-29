@class UIView;
@protocol IESLivePlayerProtocol;

@interface AWELivePaidStreamControlConfig : NSObject

@property (nonatomic) long long liveSource;
@property (weak, nonatomic) id<IESLivePlayerProtocol> streamPlayer;
@property (weak, nonatomic) UIView *trialView;
@property (weak, nonatomic) UIView *trialContainerView;
@property (copy, nonatomic) id /* block */ trackParamHandler;
@property (copy, nonatomic) id /* block */ paidPanelURLParamsHandler;
@property (copy, nonatomic) id /* block */ playerShouldMuteAfterPromiseHandler;

- (void).cxx_destruct;

@end
