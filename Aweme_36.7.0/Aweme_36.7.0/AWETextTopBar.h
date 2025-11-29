@class NSString, AWETextToolStackView;

@interface AWETextTopBar : UIView <AWETextToolStackViewProtocol>

@property (retain, nonatomic) AWETextToolStackView *stackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAllBarItems;
- (void)updateBarItemWithItemIdentity:(id)a0;
- (void)registerItemConfigProvider:(id /* block */)a0 clickHandler:(id /* block */)a1 forItemIdentity:(id)a2;
- (struct CGPoint { double x0; double x1; })itemViewCenterOffsetWithItemIdentity:(id)a0;
- (id)getItemViewWithItemIdentity:(id)a0;
- (id)initWithBarItemIdentityList:(id)a0;
- (void)p_setupWithBarItemWithIdentityList:(id)a0;
- (void)p_setupBarStackViewWithIdentityList:(id)a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
