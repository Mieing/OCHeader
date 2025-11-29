@class AWEPOICityLiveComponentView, NSString, NSArray, AWEAwemeModel;

@interface AWEPOICityLiveComponentViewModel : DitoComponentViewModel <AWEPOIDetailNGAutoPlayUtilObjectProtocol, AWEPOISyncFeedExtensionGetModelProtocol, AWEPOIDetailNGViewModelZoomTransitionProtocol>

@property (nonatomic) double height;
@property (nonatomic) BOOL firstTimeShow;
@property (readonly, nonatomic) BOOL isInLiveTab;
@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (weak, nonatomic) AWEPOICityLiveComponentView *cell;
@property (readonly, copy, nonatomic) NSString *statusLabelText;
@property (readonly, copy, nonatomic) NSString *statusDetailIconImageName;
@property (readonly, copy, nonatomic) NSString *statusDetailLabelText;
@property (readonly, nonatomic) NSArray *coverImagURLList;
@property (readonly, nonatomic) NSArray *userAvatarImageURLList;
@property (readonly, copy, nonatomic) NSString *userNikenameText;
@property (readonly, copy, nonatomic) NSString *contentText;
@property (readonly, copy, nonatomic) NSString *liveStreamData;
@property (readonly, copy, nonatomic) NSString *liveStreamURL;
@property (readonly, nonatomic) BOOL shouldAutoPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)coverImageHWRatio;

- (void)canEnterLiveRoom:(id /* block */)a0;
- (void)enterLiveRoom;
- (id)playerCell;
- (id)zoomTransitionView;
- (id)getAwemeModel;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (id)constData;
- (id)generalContext;
- (id)syncFeedManager;
- (void)componentViewWillShow;
- (double)labelContentHeightWithString:(id)a0 maxWidth:(double)a1;
- (BOOL)isInLiveTab;
- (void)trackFirstShowEvent;
- (void)componentViewDidEndShow;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (unsigned long long)indexInGroup;
- (BOOL)shouldAutoPlay;

@end
