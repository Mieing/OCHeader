@class WCFinderScrollActionSheetDelegate, NSArray, NSMutableDictionary, WCFinderFeedContentVM, NSString, WCFinderScrollActionGridView, NSMutableArray;
@protocol WCFinderScrollActionSheetDelegate;

@interface WCFinderScrollActionSheet : MMScrollActionSheet <WCFinderStreamProfileDragBarViewDelegate, WCFinderScrollActionGridViewDelegate, WCFinderLiveShareSceneProvider>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderScrollActionSheetDelegate *delegateReplace;
@property (nonatomic) unsigned long long feedViewerScene;
@property (retain, nonatomic) WCFinderScrollActionGridView *bodyGridView;
@property (retain, nonatomic) NSArray *itemArrayConfig;
@property (retain, nonatomic) NSMutableArray *recentContactArray;
@property (nonatomic) BOOL fromMoreButton;
@property (nonatomic) BOOL isAutoPlayNextFeedSwitchOn;
@property (nonatomic) double expTime;
@property (nonatomic) long long actionType;
@property (nonatomic) BOOL displayGridStyle;
@property (weak, nonatomic) id<WCFinderScrollActionSheetDelegate> finderDelegate;
@property (nonatomic) BOOL shareFromFastForward;
@property (retain, nonatomic) NSMutableDictionary *itemUDFKV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorSortedFlags;
+ (id)viewerSortedFlags;

- (id)initWithContentVM:(id)a0 feedViewerScene:(unsigned long long)a1;
- (id)containerViewBlurBackgroundColor;
- (void)setupGridStyle;
- (id)_getFinderDisableColor;
- (id)init;
- (void)_setUpStandardHeaderViewWithContentVM:(id)a0;
- (void)setUpCustomRecentForwardScrollViewWithMenuActionDelegate:(id)a0 screenWid:(double)a1 scene:(unsigned long long)a2 msgType:(unsigned int)a3 innerAppMsgType:(unsigned int)a4;
- (BOOL)shouldShowHeaderSpamTips:(id)a0;
- (id)displaySectionName:(long long)a0;
- (id)genMenuIconArray:(id)a0 contentVM:(id)a1;
- (BOOL)haveConfigOfItem:(unsigned long long)a0;
- (BOOL)isAuthorSceneForContentVM:(id)a0;
- (void)sortRowItems:(id)a0 isAuthor:(BOOL)a1;
- (void)addBackgroundColorMaskForRowItem:(id)a0 maskColor:(id)a1 resumeInterval:(float)a2;
- (id)getRowItems:(unsigned long long)a0 contentVM:(id)a1;
- (id)createMinimizeItemWithContentVM:(id)a0;
- (id)createStarItemWithContentVM:(id)a0;
- (BOOL)_itemEnable:(unsigned long long)a0 contentVM:(id)a1;
- (unsigned long long)_redDotTypeForFlag:(unsigned long long)a0;
- (void)configScrollActionSheet:(id)a0 rowIndex:(unsigned long long)a1;
- (BOOL)hasItem:(unsigned long long)a0;
- (void)showInView:(id)a0;
- (void)dragBarViewDidEnd:(id)a0 slideToClose:(BOOL)a1;
- (double)dragBarViewExpandMaxHeight:(id)a0;
- (double)dragBarViewExpandMinHeight:(id)a0;
- (void)onGridViewWillDisplayItem:(id)a0 forView:(id)a1;
- (long long)liveShareScene;
- (void).cxx_destruct;

@end
