@class TextMessageViewModel;

@interface TextMessageSubViewModel : TextMessageViewModel

@property (weak, nonatomic) TextMessageViewModel *parentModel;
@property (nonatomic) double startHeight;

- (id)initWithParentViewModel:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)resetLayoutCache;
- (void)expandSolitaire;
- (id)delegate;
- (long long)numberOfRowsInSection;
- (void)setLinkHighlighted:(BOOL)a0 url:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getLinkRangeWithTargetLinkStyle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realFrameByCurFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
