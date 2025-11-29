@class NSString, NSDictionary, UIView, NSNumber;
@protocol IESLivePlayerProtocol;

@interface IESLivePipUnitModel : NSObject

@property (nonatomic) long long pipHideType;
@property (copy, nonatomic) id /* block */ beforeEnterStageBlock;
@property (copy, nonatomic) id /* block */ duringEnterStageBlock;
@property (copy, nonatomic) id /* block */ willShowStageBlock;
@property (copy, nonatomic) id /* block */ didShowStageBlock;
@property (copy, nonatomic) id /* block */ didCloseStageBlock;
@property (copy, nonatomic) id /* block */ duringReturnToLiveBlock;
@property (copy, nonatomic) id /* block */ clickPauseBlock;
@property (copy, nonatomic) id /* block */ clickResumeBlock;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *playerView;
@property (retain, nonatomic) UIView *pipView;
@property (copy, nonatomic) NSString *businessLine;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) unsigned long long viewType;
@property (nonatomic) unsigned long long entranceType;
@property (weak, nonatomic) id<IESLivePlayerProtocol> player;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL roomFinished;
@property (nonatomic) long long fromSceneType;
@property (nonatomic) BOOL isNeedAddPlayer;
@property (nonatomic) BOOL isForbidShow;
@property (nonatomic, getter=isSecureContent) BOOL secureContent;

- (void)setPlayerView:(id)a0 callTrace:(id)a1;
- (void)setPipView:(id)a0 callTrace:(id)a1;
- (void)setContainerView:(id)a0 callTrace:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
