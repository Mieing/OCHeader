@class AWEPOIFeedUgcQAEntranceInfoModel, AWEPOIDetailNGPageContext, NSString, AWEPOIDetailNGUGCConspicuousQaEmptyComponentView;

@interface AWEPOIDetailNGUGCConspicuousQaEmptyComponentViewModel : DitoComponentViewModel <AWEPOIDetailFeedUgcConspicuousQaEmptyCellDelegate>

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (nonatomic) BOOL hasTrackedShow;
@property (retain, nonatomic) AWEPOIFeedUgcQAEntranceInfoModel *qaModel;
@property (weak, nonatomic) AWEPOIDetailNGUGCConspicuousQaEmptyComponentView *componentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)componentViewDidCompleteShow;
- (void)didTapMoreFoldIcon;
- (void)bindRefreshAfterWriteSuccess;
- (void)postRefreshEventAfterDelay;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end
