@class NSString, AWEIMChatCellViewModel;
@protocol AWEIMChatCellComponentConfigProtocol, AWEIMChatCellFeatureSwitchProtocol;

@interface AWEIMChatCellComponentContext : AWEIMComponentContext <AWEIMComponentPerfTracker>

@property (weak, nonatomic) id<AWEIMChatCellFeatureSwitchProtocol> featureSwitch;
@property (nonatomic) unsigned long long aliasScene;
@property (weak, nonatomic) AWEIMChatCellViewModel *cellViewModel;
@property (nonatomic) BOOL enableFriendActiveSwitch;
@property (nonatomic) BOOL enableMsgTabUIOpt;
@property (retain, nonatomic) id<AWEIMChatCellComponentConfigProtocol> cellComponentConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isCompanyAccount:(id)a0;
- (BOOL)enableTrackPerfMetrics;
- (void)trackPerfMetrics:(double)a0 compClass:(Class)a1 invocationSelector:(SEL)a2;
- (void).cxx_destruct;
- (id)chat;

@end
