@class AWELiveCardTopInfoView;

@interface AWELiveFormatTopInfoElement : AWELiveTopElement

@property (retain, nonatomic) AWELiveCardTopInfoView *topView;
@property (nonatomic) BOOL isPortraitStream;

- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (void)p_updateConstraint;
- (double)p_topOffSet;
- (id)headerLeftTagText;
- (id)secondTagTitle;
- (id)operationPlaceText;
- (void).cxx_destruct;
- (long long)tagType;
- (void)setData:(id)a0;
- (id)subTitle;
- (id)title;
- (void)viewDidLoad;

@end
