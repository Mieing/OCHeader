@interface AWEKnowledgeSwiftImpl.TopicBaseShootButton : UIView <AWETopicShootButtonProtocol> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ logExtraDict;
}

- (void)configWithModel:(id)a0 delegate:(id)a1 logExtraDict:(id)a2;
- (void)executeManualLayoutWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)executeAutoLayoutWithContainerView:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
