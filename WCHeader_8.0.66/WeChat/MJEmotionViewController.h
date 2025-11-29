@class EditImageEmotionToolAttrView, NSString, MJSegmentViewModel, MJEmoticonPickerItem, MJInspectorToolBar;
@protocol MJEmotionViewControllerDelegate;

@interface MJEmotionViewController : UIViewController <EditImageEmotionToolAttrDelegate>

@property (retain, nonatomic) EditImageEmotionToolAttrView *emotionView;
@property (retain, nonatomic) MJInspectorToolBar *toolBar;
@property (readonly, nonatomic) BOOL isReplacing;
@property (readonly, nonatomic) MJEmoticonPickerItem *backupItem;
@property (retain, nonatomic) MJSegmentViewModel *entranceSegmentVM;
@property (weak, nonatomic) id<MJEmotionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)setupViews;
- (void)addToolBarIfNeeded;
- (void)onEmotionToolBarDoneBtnClicked;
- (void)didSelectEmoticonWithWrap:(id)a0 decodedImage:(id)a1;
- (id)currentViewController;
- (void).cxx_destruct;

@end
