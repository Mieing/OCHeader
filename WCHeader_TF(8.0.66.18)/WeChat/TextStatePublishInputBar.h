@class NSString, MMUIButton;
@protocol WCCommonInputViewDelegate;

@interface TextStatePublishInputBar : UIView <WCInputViewProtocol>

@property (retain, nonatomic) MMUIButton *switchButton;
@property (weak, nonatomic) id<WCCommonInputViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setInputMode:(unsigned long long)a0;
- (void)onTapSwitchButton:(id)a0;
- (void).cxx_destruct;

@end
