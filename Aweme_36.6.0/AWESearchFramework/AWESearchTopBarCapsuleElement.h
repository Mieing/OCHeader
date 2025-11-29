@class NSArray, NSString, AWESearchBarCapsuleView;

@interface AWESearchTopBarCapsuleElement : AWESearchTopBarBaseElement <AWESearchBarCapsuleViewDelegate>

@property (retain, nonatomic) AWESearchBarCapsuleView *capsuleView;
@property (copy, nonatomic) NSArray *capsules;
@property (nonatomic) long long capsuleCornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeCapsule;
- (void)capsuleViewDidClick:(id)a0 index:(long long)a1 isLastItem:(BOOL)a2;
- (BOOL)shouldTrackNewClick;
- (id)getCapsuleLogExtraParams;
- (void)appendCapsule:(id)a0;
- (BOOL)isCapsuleShown;
- (BOOL)hasCapsule;
- (void)updateElementsLayoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configNewSearchTheme:(unsigned long long)a0 currentModernFeedUITheme:(unsigned long long)a1 uiThemeStyle:(long long)a2;
- (void)updateCapsule:(id)a0 isDarkMode:(BOOL)a1;
- (void)setCapsuleHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 context:(id)a1;

@end
