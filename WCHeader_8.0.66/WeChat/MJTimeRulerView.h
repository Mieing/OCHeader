@class MJRulerView, MJTimeRulerViewLayout;
@protocol MJTimelineVisibleRectDataSource;

@interface MJTimeRulerView : UIView {
    MJRulerView *_backingRulerView;
}

@property (weak, nonatomic) id<MJTimelineVisibleRectDataSource> dataSource;
@property (readonly, nonatomic) MJTimeRulerViewLayout *layout;

- (id)initWithLayout:(id)a0;
- (void)setupViews;
- (void)bindViews;
- (void)redrawTimeRulerMarks;
- (void).cxx_destruct;

@end
