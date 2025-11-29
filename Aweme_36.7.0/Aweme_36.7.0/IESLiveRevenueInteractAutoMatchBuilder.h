@class NSString;
@protocol IESLiveRevenueInteractAutoMatchBuilderDelegate, IESLiveRevenueInteractProvider;

@interface IESLiveRevenueInteractAutoMatchBuilder : NSObject <IESLiveRevenueInteractAutoMatchBuilderDelegate>

@property (nonatomic) unsigned long long scene;
@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> provider;
@property (weak, nonatomic) id<IESLiveRevenueInteractAutoMatchBuilderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindAction;
- (id)initWithContext:(id)a0 scene:(unsigned long long)a1 provider:(id)a2;
- (void)handleBattleMatchInviteMessage:(id)a0;
- (void)handleBattleMatchCancelMessage:(id)a0;
- (void).cxx_destruct;

@end
