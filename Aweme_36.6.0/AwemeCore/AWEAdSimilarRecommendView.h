@class UIView, NSString, AWEAwemeModel, UILabel, AWESimilarRecommendDataManager, UIButton;

@interface AWEAdSimilarRecommendView : UIView <AWEAdSimilarRecommendView>

@property (retain, nonatomic) AWESimilarRecommendDataManager *dataManager;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *imageViewsContainer;
@property (nonatomic) double width;
@property (nonatomic) double scale;
@property (nonatomic) long long finishedLoadImageCount;
@property (nonatomic) BOOL platformShowFinished;
@property (nonatomic) BOOL hasTrackAllShowFinished;
@property (nonatomic) double allImageShowTimeInterval;
@property (nonatomic) BOOL isClose;
@property (copy, nonatomic) id /* block */ imageLoadCompletion;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) long long curSelectedIndex;
@property (nonatomic) long long curViewZoomCount;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long similarRecommendType;
@property (copy, nonatomic) NSString *attachTitle;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (copy, nonatomic) id /* block */ didTapCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSubViewForAttachMaterial;
- (void)didSelectViewAtIndex:(long long)a0;
- (void)trackSuccessWithModel:(id)a0;
- (void)trackAllShowFinishedWithModel:(id)a0 startRequestTime:(double)a1;
- (void)trackEventForUnloadImage;
- (void)trackForClosingView;
- (void)trackEventForSelectViewAtIndex:(long long)a0 withModel:(id)a1;
- (void)closeView:(id)a0;
- (id)initWithDataManager:(id)a0 width:(double)a1;
- (void)showWithAnimationInView:(id)a0;
- (id)curSelectedViewWithOffset:(long long)a0;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
