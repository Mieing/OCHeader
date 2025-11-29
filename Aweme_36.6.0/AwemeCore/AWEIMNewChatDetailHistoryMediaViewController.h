@class NSArray, AWEIMHistoryMediaDisplayView, NSString, AWEIMNewChatDetailContext, UIView;
@protocol AWEIMAssociateScrollViewDelegate;

@interface AWEIMNewChatDetailHistoryMediaViewController : UIViewController <AWEIMAssociateScrollViewDelegate, AWEIMAssociateScrollViewProtocol>

@property (retain, nonatomic) AWEIMHistoryMediaDisplayView *displayView;
@property (retain, nonatomic) NSArray *mediaMessageTypes;
@property (nonatomic) double numberOfCellsPerRow;
@property (nonatomic) double cellWitdh;
@property (nonatomic) double cellHeight;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *naviTitle;
@property (nonatomic) BOOL adjustForBigFontStyle;
@property (nonatomic) unsigned long long vcType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEIMNewChatDetailContext *context;
@property (weak, nonatomic) id<AWEIMAssociateScrollViewDelegate> associateScrollDelegate;
@property (retain, nonatomic) UIView *headerBaseView;

- (id)currentScrollView;
- (double)contentOffsetY;
- (void)adjustContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (double)contentSizeHeight;
- (void)onBackTapped;
- (BOOL)isEmptyScrollView;
- (id)initWithMediaMessageTypes:(id)a0;
- (double)heightForChatDetailTabbarView;
- (double)heightForNaviBar;
- (double)heightForChatDetailHeaderView;
- (double)heightForExternalGap;
- (void)scrollViewDidScroll:(id)a0 scrollView:(id)a1 contentOffsetY:(double)a2 originalContentOffsetY:(double)a3;
- (double)contentOffsetYForChatDetailHeaderView;
- (id)initFullWithMediaMessageTypes:(id)a0 naviTitle:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupView;

@end
