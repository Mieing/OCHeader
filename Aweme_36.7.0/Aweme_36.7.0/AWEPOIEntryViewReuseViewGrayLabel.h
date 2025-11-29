@class UILabel, AWEHollowLabel, NSString;

@interface AWEPOIEntryViewReuseViewGrayLabel : UIView <AWEPOIEntryViewReuseViewProtocol>

@property (retain, nonatomic) AWEHollowLabel *hollowLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithItem:(id)a0 entryViewScene:(long long)a1 isBGColorWhite:(BOOL)a2 entryViewLayout:(id)a3;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })labelSize;
- (double)viewHeight;
- (double)viewWidth;

@end
