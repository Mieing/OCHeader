@class NSString, JSApiSelectSessionViewController;
@protocol WCPaySelectSingleContactControlLogicDelegate;

@interface WCPaySelectSingleContactControlLogic : WCPayControlLogic <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate>

@property (retain, nonatomic) JSApiSelectSessionViewController *selectSessionVC;
@property (weak, nonatomic) id<WCPaySelectSingleContactControlLogicDelegate> delegate;
@property (nonatomic) BOOL pushVC;
@property (nonatomic) BOOL onlyShowContactList;
@property (copy, nonatomic) NSString *selectContactVCTitle;

- (id)initWithData:(id)a0 delegate:(id)a1;
- (void)startLogic;
- (void)MMUIViewControllerDidBeRemoved:(id)a0;
- (void)WCPayViewControllerDidBeRemoved:(id)a0;
- (void)stopSelectContact;
- (void)OnJSApiSelectContactsViewControllerBack;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)a0;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)a0 atScene:(unsigned int)a1;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void).cxx_destruct;

@end
