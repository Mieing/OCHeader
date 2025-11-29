@interface AWERelatedRecommendImpl.RelatedRecommendTabListHeaderViewController : UIViewController <AWERelatedRecommendTopElementDelegate, AWETabListHeaderViewControllerProtocol> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ configModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topAreaView;
}

@property (nonatomic, readonly) BOOL panelHasExpanded;
@property (nonatomic, readonly) double panelOriginHeight;
@property (nonatomic, readonly) BOOL panelIsShowing;

- (void)elementDidChangeHeightWith:(id)a0;
- (double)currentOffsetY;
- (void)scrollToOffset:(double)a0;
- (void)hiddenTabIfNeed;
- (double)elementTopHeightWith:(long long)a0;
- (void)scrollToOffset:(double)a0 animated:(BOOL)a1;
- (double)scrollMaxOffsetY;
- (double)panelOffsetY;
- (BOOL)hasSegmentedControl;
- (void)configWithHeaderModel:(id)a0;
- (double)heightForHeaderView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
