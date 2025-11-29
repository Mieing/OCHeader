@class NSString, WCAdFinderFollowInfo, WCAdvertiseInfo, WCAdHalfScreenContainerBaseView;
@protocol WCAdFinderFollowLogicDelegate;

@interface WCAdFinderFollowLogic : WCAdvertiseOperationLogicBase <WCAdHalfScreenContainerViewDelegate>

@property (retain, nonatomic) WCAdFinderFollowInfo *adFinderFollowInfo;
@property (retain, nonatomic) WCAdvertiseInfo *adData;
@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSString *btnTitle;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *friendFollowCountFormat;
@property (retain, nonatomic) NSString *feedCountFormat;
@property (retain, nonatomic) WCAdHalfScreenContainerBaseView *halfScreenView;
@property (weak, nonatomic) id<WCAdFinderFollowLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFinderFollowInfo:(id)a0 adData:(id)a1 snsId:(id)a2 btnTitle:(id)a3 source:(int)a4;
- (void)start;
- (void)checkFollowingState;
- (BOOL)isFollowing;
- (void)checkFollowingStateFromLocal;
- (void)checkFollowingStateFromServer;
- (id)genTipsContent;
- (BOOL)isFinderFollowing:(id)a0;
- (void)onConfirmButtonClick;
- (void).cxx_destruct;

@end
