@interface AWEStoryImpl.StoryTabEmptySectionController : AWEStoryKit.StoryKitBaseSectionController {
    void /* unknown type, empty encoding */ selfEmptyView;
    void /* unknown type, empty encoding */ otherEmptyView;
    void /* unknown type, empty encoding */ selfMomentEmptyView;
    void /* unknown type, empty encoding */ otherMomentEmptyView;
}

@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } inset;

- (void)tapShootButton;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;

@end
