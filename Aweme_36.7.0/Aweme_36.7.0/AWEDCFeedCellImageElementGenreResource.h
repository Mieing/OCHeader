@class AWEDCFeedCellImageElementGenreResourceLiveView, AWEDCFeedPageContext, AWEAwemeModel, AWEDCFeedCellImageElementGenreResourceIconView;

@interface AWEDCFeedCellImageElementGenreResource : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (nonatomic) long long genreType;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *albumView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *textView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *videoView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceLiveView *liveView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *articleView;

- (id)classNameWithReferString;
- (void)updateWithAwemeModel:(id)a0 context:(id)a1;
- (BOOL)enableTextIcon;
- (id)initWithAwemeModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)currentView;

@end
