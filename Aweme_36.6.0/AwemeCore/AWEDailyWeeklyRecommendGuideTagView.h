@class NSString, AWETemplateTagsModel, UIView, AWERecommendThumbsView, AWETemplateTagsContext;
@protocol AWETemplateTagsTemplateViewDelegate, AWETemplateTagsTemplateViewProtocol;

@interface AWEDailyWeeklyRecommendGuideTagView : UIView <AWETemplateTagsTemplateViewProtocol>

@property (retain, nonatomic) UIView<AWETemplateTagsTemplateViewProtocol> *dailyWeeklyRecommendView;
@property (retain, nonatomic) AWERecommendThumbsView *thumbsLabelView;
@property (retain, nonatomic) AWETemplateTagsModel *tagsModel;
@property (nonatomic) long long templateType;
@property (retain, nonatomic) AWETemplateTagsContext *tagsContext;
@property (nonatomic) BOOL isShowAnimation;
@property (weak, nonatomic) id<AWETemplateTagsTemplateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getParallelShowTagsModel:(id)a0 awemeModel:(id)a1;
- (id)getDailyWeeklyViewWithTagsModel:(id)a0 templateType:(long long)a1;
- (void)showThumbsLabelViewIfNeedWithModel:(id)a0;
- (BOOL)hadShowRecommendGuideTagAnimation:(id)a0;
- (void)trackForRecommendVideoToastWithIsWeekly:(BOOL)a0 actionType:(unsigned long long)a1;
- (void)prepareForRecommendGuideTagAnimationWithContext:(id)a0;
- (id)createAnimationFakeDailyWeeklyViewWithContext:(id)a0;
- (id)createAnimationThumbsViewWithContext:(id)a0;
- (void)clickDailyWeeklyView;
- (void)clickThumbsLabelView:(id)a0;
- (BOOL)fixClickDailyWeeklyEnable;
- (void)configWithTagsModel:(id)a0 templateType:(long long)a1 context:(id)a2;
- (void)showRecommendGuideTagAnimationWithContext:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
