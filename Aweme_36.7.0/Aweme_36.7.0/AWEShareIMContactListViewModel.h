@class NSArray, NSString, AWEShareContext;
@protocol AWEIMQuickReplyControllerHandlerPortocol;

@interface AWEShareIMContactListViewModel : NSObject <AWEIMQuickReplyViewControllerDelegate>

@property (retain, nonatomic) id<AWEIMQuickReplyControllerHandlerPortocol> quickReplyHandler;
@property (retain, nonatomic) AWEShareContext *context;
@property (copy, nonatomic) NSArray *imShareModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)shareToUser:(id)a0;
- (void)sharePrivacyToUser:(id)a0;
- (id)fetchExternalShareEventContext;
- (void)startFetchingIMContact:(id /* block */)a0;
- (void)showMoreFriendsPanelWithTrackParams:(id)a0;
- (void)trackClickSendTextButton;
- (void)trackShareVideoWithPlatform:(id)a0;
- (void)trackShareToUser:(id)a0 withPlatform:(id)a1;
- (void)trackAdShareIfNeeded;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
