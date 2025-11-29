@class NSMutableArray, UIView;
@protocol MMFinderLiveQuickCommentViewDelegate;

@interface MMFinderLiveQuickCommentView : UIView

@property (nonatomic) double maxWidthLimit;
@property (retain, nonatomic) NSMutableArray *itemViewArr;
@property (retain, nonatomic) NSMutableArray *lineViewArr;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) double preferHeight;
@property (nonatomic) double preferWidth;
@property (weak, nonatomic) id<MMFinderLiveQuickCommentViewDelegate> delegate;

- (id)init;
- (void)layoutSubviews;
- (void)layoutCommentLines;
- (void)layoutBackgroundView;
- (void)updatePreferHeight;
- (void)updatePreferWidth;
- (void)updateMaxWidthLimit:(double)a0;
- (void)updateWithItemArray:(id)a0;
- (void)updateQuickCommentLine;
- (unsigned long long)getLineViewCount;
- (void).cxx_destruct;

@end
