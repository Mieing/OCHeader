@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo, WCCardCodeAnimator, UIView;
@protocol WCCardTicketCodeCellViewDelegate;

@interface WCCardTicketCodeCellView : MMUIView <WCCardCodeAnimatorDelegate> {
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    WCCardCodeAnimator *_codeAnimator;
    UIView *_codeContainView;
    id<WCCardTicketCodeCellViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForCardSource:(id)a0 viewWidth:(double)a1;

- (id)initWithViewWidth:(double)a0 cardSource:(id)a1 delegate:(id)a2;
- (void)setupView;
- (id)createSecondaryFieldView;
- (id)getCodeViewWithCode:(id)a0;
- (id)createCodeNumView;
- (void)fieldClicked:(id)a0;
- (void)codeAnimatorWillBecomeFullScreen:(id)a0;
- (void)codeAnimatorWillExitFullScreen:(id)a0;
- (void).cxx_destruct;

@end
