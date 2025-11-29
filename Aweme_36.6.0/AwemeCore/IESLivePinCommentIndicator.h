@class NSMutableArray;

@interface IESLivePinCommentIndicator : UIView

@property (retain, nonatomic) NSMutableArray *dotViews;
@property (nonatomic) BOOL changing;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long currentPage;

- (void)setProgress:(double)a0 fromPage:(long long)a1 toPage:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
