@class WCFinderPostMgr, WCFinderFeedPickerTabView, NSString, UIScrollView, NSMutableArray, WCFinderFeedPickerParams;
@protocol WCFinderFeedPickerViewControllerDelegate;

@interface WCFinderFeedPickerViewController : MMUIViewController <WCFinderFeedPickerTabViewDelegate, WCFinderChooseFeedTabControllerDelegate, WCFinderSearchPickerViewControllerDelegate, WCFinderPostMgrDelegate, WCFinderPostDataItemExt, WCFinderFeedPickerPreviewListViewControllerDelegate>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) WCFinderFeedPickerTabView *tabView;
@property (retain, nonatomic) NSMutableArray *tabControllers;
@property (retain, nonatomic) WCFinderFeedPickerParams *params;
@property (retain, nonatomic) NSMutableArray *tabViewModels;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) WCFinderPostMgr *postMgr;
@property (nonatomic) long long publishTabIndex;
@property (copy, nonatomic) id /* block */ pushCustomVCBlock;
@property (weak, nonatomic) id<WCFinderFeedPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPickerForEmoticon;
+ (id)pickerForEmoticonInImagePicker;
+ (id)pickerForEmoticon:(BOOL)a0;
+ (id)defaultPicker;
+ (id)defaultPickerWithParams:(id)a0;
+ (id)pickerForWxSnsWithParams:(id)a0;
+ (id)pickerForFinderMusicPublishWithParams:(id)a0;
+ (id)pickerWithParams:(id)a0 supportedTabTypes:(id)a1;
+ (BOOL)canShowFinderPicker;

- (id)initWithTabViewModels:(id)a0 params:(id)a1;
- (id)getPickerSessionId;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (double)getSafeTopInset;
- (void)viewDidTransitionToNewSize;
- (void)dealloc;
- (void)setupSubView;
- (void)loadCurrentTabData;
- (id)navigationBarBackgroundColor;
- (int)currentType;
- (long long)currentEventCode;
- (long long)eventCodeWithTabType:(int)a0;
- (void)reportDataWithActionType:(long long)a0 eventCode:(long long)a1 feedid:(id)a2;
- (void)onReturn;
- (void)onCameraButtonTap;
- (void)onSearchButtonTap;
- (void)onLimitedClicked;
- (void)showPreviewWithViewModel:(id)a0 index:(unsigned long long)a1;
- (void)reportClick:(id)a0;
- (void)finderFeedPickerTabView:(id)a0 didSelected:(long long)a1;
- (void)finderSearchPickerViewController:(id)a0 didSelectWithSearchModel:(id)a1 index:(long long)a2;
- (void)finderChooseFeedTabController:(id)a0 didSelectItemAtIndex:(long long)a1 withTabModel:(id)a2;
- (void)finderChooseFeedTabController:(id)a0 willDisplayItemAtIndex:(long long)a1 withTabModel:(id)a2;
- (void)finderFeedPickerPreviewListViewController:(id)a0 didSelectDataItem:(id)a1;
- (void)finderFeedPickerPreviewViewController:(id)a0 didClickCancelWithDataItem:(id)a1;
- (void)postMgrStartUpload;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (void).cxx_destruct;

@end
