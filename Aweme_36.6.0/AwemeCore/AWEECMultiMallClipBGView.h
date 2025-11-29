@class NSString, NSDictionary, IESECMallCategoryTabAreaModel, IESECMallBackgroundView;

@interface AWEECMultiMallClipBGView : UIView

@property (retain, nonatomic) IESECMallBackgroundView *bgView;
@property (copy, nonatomic) NSString *currentPageTheme;
@property (copy, nonatomic) NSDictionary *currentTransInfo;
@property (copy, nonatomic) NSDictionary *imgViewMap;
@property (retain, nonatomic) IESECMallCategoryTabAreaModel *tabListModel;
@property (nonatomic) long long currentTabIndex;
@property (nonatomic) long long previousTabIndex;

- (unsigned long long)currentThemeStyle;
- (void)mallChannelInnerTheme:(id)a0;
- (void)mallChannelTransInfo:(id)a0;
- (void)needSwitchToGrey:(BOOL)a0;
- (void)updateSkinBackground:(id)a0;
- (void)updateTopOffset:(double)a0;
- (void)listenListCollectionScrollOffsetY:(double)a0;
- (void)addBGView;
- (id)currentThemeStyleDefine;
- (void)categoryWillTransitionToIndex:(long long)a0 fromIndex:(long long)a1;
- (void)updateWithTabListModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithTheme:(id)a0;

@end
