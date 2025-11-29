@class MJSnapMarksViewLayout, MJRulerView;
@protocol MJTimelineVisibleRectDataSource;

@interface MJSnapMarksView : UIView {
    MJRulerView *_backingRulerView;
}

@property (weak, nonatomic) id<MJTimelineVisibleRectDataSource> dataSource;
@property (readonly, nonatomic) MJSnapMarksViewLayout *layout;

- (id)initWithLayout:(id)a0;
- (void)setupViews;
- (void)bindViews;
- (void)redrawSnapMarks;
- (void).cxx_destruct;

@end
