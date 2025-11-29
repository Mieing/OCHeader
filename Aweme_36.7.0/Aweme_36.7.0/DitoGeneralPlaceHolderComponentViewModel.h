@class NSString, UIColor, DitoGeneralPlaceHolderComponentView;

@interface DitoGeneralPlaceHolderComponentViewModel : DitoComponentViewModel

@property (nonatomic) double contentHeight;
@property (nonatomic) unsigned long long offsetType;
@property (nonatomic) BOOL shouldTransEvent;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) BOOL hasSeparator;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) double separatorHeight;
@property (nonatomic) double separatorMarginLeft;
@property (nonatomic) double separatorMarginRight;
@property (weak, nonatomic) DitoGeneralPlaceHolderComponentView *cell;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)didEndReload;
- (void)clickGeneralPlaceHolder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
