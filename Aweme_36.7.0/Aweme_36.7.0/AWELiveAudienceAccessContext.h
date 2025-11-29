@class UIViewController, IESLiveEnterRoomAisle, HTSEventContext, UIView, AWELiveRoomModel, AWELiveAudienceAccessServiceConfig;
@protocol IESLiveInnerFeedViewControllerProtocol, IESLiveAudienceViewControllerProtocol;

@interface AWELiveAudienceAccessContext : NSObject

@property (nonatomic) unsigned long long stage;
@property (retain, nonatomic) AWELiveRoomModel *roomModel;
@property (retain, nonatomic) AWELiveAudienceAccessServiceConfig *config;
@property (weak, nonatomic) UIViewController *containerViewController;
@property (weak, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (retain, nonatomic) UIViewController<IESLiveAudienceViewControllerProtocol> *audienceViewController;
@property (retain, nonatomic) UIViewController<IESLiveInnerFeedViewControllerProtocol> *innerFeedViewController;
@property (nonatomic) BOOL isEntering;

- (void).cxx_destruct;
- (void)prepareForReuse;

@end
