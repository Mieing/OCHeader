@class IESIMStreakFlameViewConfig, AWEIMCodeGenStreakInfoModel, UIView;
@protocol IESIMConversationProtocol, IESIMStreakFlameViewProtocol;

@interface AWEIMGrowthImpl.StreakDisplayManager : NSObject <AWEIMStreakServerDataPrefetchEvent, IESIMStreakFlameViewDelegate, AWEIMStreakDisplayManagerProtocol, AWEIMStreakDataCenterMessage> {
    void /* unknown type, empty encoding */ streakAttributedString;
    void /* unknown type, empty encoding */ peerUser;
    void /* unknown type, empty encoding */ isWithoutView;
    void /* unknown type, empty encoding */ preAWETheme;
    void /* unknown type, empty encoding */ hasInitRendered;
    void /* unknown type, empty encoding */ defaultStreakHeight;
    void /* unknown type, empty encoding */ defaultAttributes;
    void /* unknown type, empty encoding */ disableInitializeFlameView;
    void /* unknown type, empty encoding */ useAsyncQueue;
    void /* unknown type, empty encoding */ commonAsyncQueue;
    void /* unknown type, empty encoding */ UIThemeService;
    void /* unknown type, empty encoding */ tipsAnimationConfig;
}

@property (nonatomic) unsigned long long scene;
@property (nonatomic, retain) UIView<IESIMStreakFlameViewProtocol> *streakFlameView;
@property (nonatomic) BOOL canShowFlameView;
@property (nonatomic, retain) AWEIMCodeGenStreakInfoModel *currentStreakFlameInfo;
@property (nonatomic, retain) id<IESIMConversationProtocol> conversation;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, retain) IESIMStreakFlameViewConfig *viewConfig;

- (void)streakAchieveDataDidUpdate:(id)a0 conversationId:(id)a1;
- (void)imStreakDataDidUpdateWithConversation:(id)a0;
- (void)streakFlameViewDidClick;
- (void)streakFlameViewTipsAnimationDidStartWithConfig:(id)a0;
- (id)initWithFromScene:(unsigned long long)a0 attributes:(id)a1 streakIconHeight:(double)a2 isWithoutView:(BOOL)a3;
- (void)updateUIRenderConfigWithStreakIconHeight:(double)a0 attributes:(id)a1;
- (void)setupWithConversation:(id)a0;
- (void)setupWithConversation:(id)a0 peerUser:(id)a1;
- (void)trackIMStreakShowWithExtraParams:(id)a0;
- (void)getStreakYYAttributedStringWithCompletion:(id /* block */)a0;
- (void)getStreakAttributedStringWithCompletion:(id /* block */)a0;
- (id)makeStreakFlameView;
- (id)init:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
