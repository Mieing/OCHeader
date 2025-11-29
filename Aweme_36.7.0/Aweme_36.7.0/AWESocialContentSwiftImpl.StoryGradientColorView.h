@interface AWESocialContentSwiftImpl.StoryGradientColorView : AWEKnowledgeGradientView <AWEStoryGradientColorViewProtocol> {
    void /* unknown type, empty encoding */ colorHolder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_manager;
}

+ (void)calculateColorsWithURLArray:(id)a0 colorHolder:(id)a1 completion:(id /* block */)a2;
+ (void)calculateColorsWithImage:(id)a0 colorHolder:(id)a1 completion:(id /* block */)a2;

- (void)configWith:(id)a0;
- (void)updateGradientColors;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
