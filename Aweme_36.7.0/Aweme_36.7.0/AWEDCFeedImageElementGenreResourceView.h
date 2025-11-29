@class AWEDCFeedCellImageElementGenreResourceLiveView, NSString, AWEDCFeedPageContext, AWEAwemeModel, AWEDCFeedCellImageElementGenreResourceIconView;

@interface AWEDCFeedImageElementGenreResourceView : UIView <AWEDCFeedCellImageElementResourceViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) AWEDCFeedPageContext *context;
@property (nonatomic) long long genreType;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *albumView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *textView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *videoView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceLiveView *liveView;
@property (retain, nonatomic) AWEDCFeedCellImageElementGenreResourceIconView *articleView;
@property (nonatomic) struct CGSize { double width; double height; } prevResourceSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cellWillDisplay;
- (void)cellDidEndDisplaying;
- (void)configResourceWithAwemeModel:(id)a0 context:(id)a1;
- (id)classNameWithReferString;
- (BOOL)enableTextIcon;
- (id)currentResourceView;
- (void).cxx_destruct;
- (id)init;

@end
