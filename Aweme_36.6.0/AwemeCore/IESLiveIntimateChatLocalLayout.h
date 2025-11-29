@class IESLiveIntimateChatGuestListView, IESLiveInteractSession, NSString, HTSInteractionStreamAppData, UIView;
@protocol IESLiveAudienceChatRoomProvider;

@interface IESLiveIntimateChatLocalLayout : NSObject <IESLiveInteractiveLocalLayout>

@property (retain, nonatomic) IESLiveInteractSession *fullSession;
@property (nonatomic) struct CGSize { double width; double height; } fullSessionVideoSize;
@property (retain, nonatomic) IESLiveIntimateChatGuestListView *guestListView;
@property (retain, nonatomic) HTSInteractionStreamAppData *curAppData;
@property (retain, nonatomic) id<IESLiveAudienceChatRoomProvider> provider;
@property (copy, nonatomic) id /* block */ handlePaidLinkmicEndBeforeUpdateLayoutOfSessionViewsCallback;
@property (retain, nonatomic) UIView *sessionViewContainer;
@property (retain, nonatomic) UIView *optionViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onNewSessionCreated:(id)a0 local:(BOOL)a1;
- (void)layoutHostSession:(id)a0;
- (void)updateLayoutOfSessionViews:(id)a0 withUserService:(id)a1;
- (void)hostSizeDidChangeWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)p_updateHostLayout;
- (void)p_updateAudienceLayoutWithSession:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
