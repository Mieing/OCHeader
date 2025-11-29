@class NSArray, NSString, UIStackView;

@interface DVETextToolStackView : UIView <DVETextToolStackViewProtocol>

@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) struct CGSize { double width; double height; } stackViewSize;
@property (nonatomic) struct CGSize { double width; double height; } itemViewSize;
@property (nonatomic) double itemSpacing;
@property (copy, nonatomic) NSArray *itemWraps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAllBarItems;
- (void)updateBarItemWithItemIdentity:(id)a0;
- (void)registerItemConfigProvider:(id /* block */)a0 clickHandler:(id /* block */)a1 forItemIdentity:(id)a2;
- (struct CGPoint { double x0; double x1; })itemViewCenterOffsetWithItemIdentity:(id)a0;
- (id)initWithBarItemIdentityList:(id)a0 itemViewSize:(struct CGSize { double x0; double x1; })a1 itemSpacing:(double)a2;
- (void)p_setupWithStackViewWithIdentityList:(id)a0 itemViewSize:(struct CGSize { double x0; double x1; })a1 itemSpacing:(double)a2;
- (void)p_updateBarItemWithItemWrap:(id)a0;
- (id)p_findItemConfigWithItemIdentity:(id)a0;
- (void)p_onBarItemSelect:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
