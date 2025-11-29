@class NSDictionary, AWEIMMessageConversation, NSString;

@interface AWEIMDefaultFloatViewTracker : NSObject <AWEIMDefaultFloatViewControllerDelegate>

@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTrackParams:(id)a0;
- (BOOL)floatViewControllerDidClickCloseButton:(id)a0;
- (BOOL)floatViewControllerDidClickConfirmButton:(id)a0;
- (void)floatViewControllerDidShow:(id)a0;
- (void)__trackShow;
- (void)__trackClickClose;
- (void)__trackClickConfirm;
- (id)__trackParams;
- (id)initWithTrackParams:(id)a0;
- (void)triggerShowTracker;
- (void).cxx_destruct;

@end
