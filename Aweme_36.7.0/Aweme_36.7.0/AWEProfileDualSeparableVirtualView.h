@class AWERLVirtualView;

@interface AWEProfileDualSeparableVirtualView : AWERLVirtualView

@property (retain, nonatomic) AWERLVirtualView *prefixView;
@property (retain, nonatomic) AWERLVirtualView *suffixView;
@property (retain, nonatomic) AWERLVirtualView *separatorView;
@property (nonatomic) BOOL markShouldHideSeparator;
@property (nonatomic) BOOL forceSwitchLines;
@property (nonatomic) double lineGap;
@property (nonatomic) BOOL forceInNewLine;

- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)canRenderView;
- (void)rebuildSubviews;
- (void)removeSeparatorView;
- (void)updatePrefixView:(id)a0 suffixView:(id)a1 separatorView:(id)a2;
- (void).cxx_destruct;

@end
