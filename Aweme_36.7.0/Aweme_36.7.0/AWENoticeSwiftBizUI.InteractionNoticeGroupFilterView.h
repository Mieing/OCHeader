@class NSString;

@interface AWENoticeSwiftBizUI.InteractionNoticeGroupFilterView : UIView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ groupFilterItemModels;
    void /* unknown type, empty encoding */ selectedIndex;
    void /* unknown type, empty encoding */ _isFilterMenuOpen;
    void /* unknown type, empty encoding */ selectedBlock;
    void /* unknown type, empty encoding */ toggleMenuBlock;
    void /* unknown type, empty encoding */ isMenuAnimating;
    void /* unknown type, empty encoding */ parentVC;
    void /* unknown type, empty encoding */ fixedTitle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dotView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleÇontainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleTextLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_arrowImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_groupFilterMenuTableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_popContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_popBackgroundView;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

- (void)handleTapContainerViewGesture:(id)a0;
- (void)cancelGestureTapped;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
