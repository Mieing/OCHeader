@class UIView;

@interface IESLiveUserCardTagsView : UIView

@property (nonatomic) double lineHeight;
@property (nonatomic) unsigned long long lineCount;
@property (nonatomic) unsigned long long currentLineCount;
@property (nonatomic) double fixedWidth;
@property (weak, nonatomic) UIView *preView;
@property (nonatomic) double contentWidth;
@property (nonatomic) double contentHeight;

- (id)initWithLineCount:(unsigned long long)a0 lineHeight:(double)a1 fixedWidth:(double)a2;
- (void)addSubView:(id)a0 viewWidth:(double)a1 isLastView:(BOOL)a2;
- (void).cxx_destruct;

@end
