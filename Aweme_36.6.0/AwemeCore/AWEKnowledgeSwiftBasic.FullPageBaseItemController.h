@class _TtC22AWEKnowledgeSwiftBasic25FullPageBaseItemViewModel;

@interface AWEKnowledgeSwiftBasic.FullPageBaseItemController : NSObject <AWEKnowledgeSwiftBasic.FullPageBaseItemControllerProtocol> {
    void /* function */ getSectionContainerBlock;
    void /* function */ heightDidChangeBlock;
    void /* function */ requireLoginBlock;
}

@property (nonatomic, retain) _TtC22AWEKnowledgeSwiftBasic25FullPageBaseItemViewModel *viewModel;
@property (nonatomic) double height;
@property (nonatomic, copy) id /* block */ getSectionContainerBlock;
@property (nonatomic, copy) id /* block */ heightDidChangeBlock;
@property (nonatomic, copy) id /* block */ requireLoginBlock;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)configCellWithCell:(id)a0 viewModel:(id)a1;
- (void)cellDidEndDisplayWithCell:(id)a0 viewModel:(id)a1;
- (void)cellWillDisplayWithCell:(id)a0 viewModel:(id)a1;
- (void)sectionControllerWillDisplay;
- (void)sectionControllerDidEndDisplaying;
- (void)fullPageThemeDidChange;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)init;
- (Class)cellClass;

@end
