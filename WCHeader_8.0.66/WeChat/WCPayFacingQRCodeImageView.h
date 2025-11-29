@class NSString;
@protocol WCPayFacingQRCodeImageViewDelegate;

@interface WCPayFacingQRCodeImageView : UIView <WCActionSheetDelegate>

@property (weak, nonatomic) id<WCPayFacingQRCodeImageViewDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)LongPressEvents;
- (void).cxx_destruct;

@end
