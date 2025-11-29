@class UIImage, NSString, DUXBadge;

@interface AWEProfileNavigationButton : UIButton <AWEProfileRedDotShowViewProtocol>

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) DUXBadge *numberBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshRedDotWithModel:(id)a0;
- (BOOL)isRedDotShow;
- (long long)redDotCount;
- (id)initWithIcon:(id)a0 text:(id)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateText:(id)a0;
- (void)refreshLayout;

@end
