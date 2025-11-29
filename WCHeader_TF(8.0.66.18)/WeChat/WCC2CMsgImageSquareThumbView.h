@class NSString;
@protocol WCC2CMsgImageSquareThumbViewDelegate;

@interface WCC2CMsgImageSquareThumbView : MsgImageSquareThumbView <WCFinderShareCustomTransitionProtocol>

@property (weak, nonatomic) id<WCC2CMsgImageSquareThumbViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doShareAnimation;
- (BOOL)canBecomeFirstResponder;
- (void)deleteAction:(id)a0;
- (void)showMsgLocation:(id)a0;
- (void).cxx_destruct;

@end
