@class NSString, IESGCPCGMembershipCardView;
@protocol IESGCPCGMembershipCardDisplayStrategy;

@interface IESGCPCGMembershipCardViewProvider : NSObject <IESGCPCGMembershipCardViewDelegate>

@property (nonatomic) BOOL cardIsShowing;
@property (retain, nonatomic) id<IESGCPCGMembershipCardDisplayStrategy> displayStrategy;
@property (nonatomic) BOOL lynxViewLoadFail;
@property (copy, nonatomic) id /* block */ lynxViewLoadFailBlock;
@property (retain, nonatomic) IESGCPCGMembershipCardView *membershipCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)tryToShowWithContext:(id)a0;
- (id)initWithDisplayStrategy:(id)a0;
- (void)_preloadMembershipCardView;
- (void)_showMembershipCard;
- (void)_showExitAlert;
- (void).cxx_destruct;
- (id)init;
- (void)dismissWithCompletion:(id /* block */)a0;

@end
