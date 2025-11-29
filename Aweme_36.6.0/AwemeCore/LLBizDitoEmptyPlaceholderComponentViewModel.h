@class NSString, LLBizDitoEmptyPlaceholderComponentView;

@interface LLBizDitoEmptyPlaceholderComponentViewModel : LLDitoComponentViewModel <LLBizDitoEmptyPlaceholderDelegate>

@property (copy, nonatomic) NSString *clickEventName;
@property (weak, nonatomic) LLBizDitoEmptyPlaceholderComponentView *cell;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *backgroundColorHex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateNode:(id)a0;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)updateWithData:(id)a0;
- (void)didTapActionButton;

@end
