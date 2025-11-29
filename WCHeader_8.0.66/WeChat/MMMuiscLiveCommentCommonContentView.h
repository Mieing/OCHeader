@class MMMusicLiveCommentBaseViewModel, RichTextView, NSString;

@interface MMMuiscLiveCommentCommonContentView : UIView

@property (retain, nonatomic) MMMusicLiveCommentBaseViewModel *viewModel;
@property (retain, nonatomic) RichTextView *commentView;
@property (retain, nonatomic) NSString *contentStr;
@property (nonatomic) BOOL isJoinStyle;

+ (id)getContentStrFromModel:(id)a0 isJoinStyle:(BOOL)a1;
+ (double)calculateHeight:(id)a0 isJoinStyle:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })calculateSize:(id)a0 outArrStyles:(id *)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
