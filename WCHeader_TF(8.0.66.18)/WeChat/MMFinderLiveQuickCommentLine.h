@class NSMutableArray;

@interface MMFinderLiveQuickCommentLine : UIView

@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSMutableArray *itemViewArr;

- (void)layoutSubviews;
- (BOOL)tryInsertItemView:(id)a0;
- (void).cxx_destruct;

@end
