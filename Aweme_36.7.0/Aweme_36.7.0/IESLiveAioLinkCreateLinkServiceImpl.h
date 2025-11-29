@class NSString, IESLiveRevenueInteractLynxLinkerAnchorBuilder;

@interface IESLiveAioLinkCreateLinkServiceImpl : NSObject <IESLiveAioLinkCreateLinkService>

@property (weak, nonatomic) IESLiveRevenueInteractLynxLinkerAnchorBuilder *anchorBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)observeInviteResult;
- (id)observeInviteMessage;
- (id)observeReplyResult;
- (id)observeReplyMessage;
- (id)observeCancelResult;
- (id)observeCancelMessage;
- (id)observeApplyResult;
- (id)observeApplyMessage;
- (id)observePermitResult;
- (void)permit:(id)a0;
- (id)observePermitMessage;
- (id)aioPublisher;
- (id)initWithDIContext:(id)a0 anchorBuilser:(id)a1;
- (id)observeLinkMessage;
- (void).cxx_destruct;
- (void)apply:(id)a0;
- (void)cancel:(id)a0;
- (void)reply:(id)a0;
- (void)invite:(id)a0;

@end
