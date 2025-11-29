@class IESLiveRevenueInteractPKPlayAdapter, IESLiveRevenueInteractMultiLinkerPlayAdapter;
@protocol IESLiveRevenueInteractLinkerProvider;

@interface IESLiveRevenueInteractLinkerPlayAdapter : NSObject <IESLiveRevenueInteractPlayAdapter>

@property (weak, nonatomic) id<IESLiveRevenueInteractLinkerProvider> provider;
@property (retain, nonatomic) IESLiveRevenueInteractMultiLinkerPlayAdapter *mlAdapter;
@property (retain, nonatomic) IESLiveRevenueInteractPKPlayAdapter *pkAdapter;

- (id)initWithDIContext:(id)a0;
- (void)setActionFromSource:(long long)a0;
- (void)resetActionFromSource;
- (BOOL)isDoublePK;
- (void)trackPKStartFromInteracting:(BOOL)a0;
- (void)trackPKEndWithReason:(int)a0 isCutOff:(BOOL)a1 isInitiator:(BOOL)a2;
- (void)trackPKEndOnPlayDestory;
- (void)trackPlayConnectionInvited:(BOOL)a0 isOnceMore:(BOOL)a1 inviteMode:(id)a2 extra:(id)a3;
- (void)addPlayTimes;
- (void)trackBattleInviteePanelShowIsOnceMore:(BOOL)a0 inviteMode:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
