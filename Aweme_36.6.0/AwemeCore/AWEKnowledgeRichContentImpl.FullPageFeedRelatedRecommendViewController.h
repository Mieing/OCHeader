@interface AWEKnowledgeRichContentImpl.FullPageFeedRelatedRecommendViewController : UIViewController <AWETabListItemViewControllerProtocol, AWEFullPageLocationInfoProtocol> {
    void /* unknown type, empty encoding */ titleStr;
    void /* unknown type, empty encoding */ containerContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relatedRecommendVC;
}

@property (nonatomic) unsigned long long locationType;

- (id)tabContentScrollView;
- (id)segmentedControlItemConfigForTabList:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
