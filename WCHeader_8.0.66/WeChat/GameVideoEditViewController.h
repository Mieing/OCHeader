@class EditVideoLogicItem, NSString, NSDictionary, UIImage, WAAppActionSheet, MMAsset, NSNumber;
@protocol GameVideoEditViewControllerDelegate;

@interface GameVideoEditViewController : GameCenterNativeVc <EditVideoLogicItemDelegate, WAAppActionSheetDelegate, EditVideoOptionsDelegate> {
    NSNumber *_videoFileSize;
}

@property (weak, nonatomic) id<GameVideoEditViewControllerDelegate> videoEditDelegate;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) MMAsset *asset;
@property (copy, nonatomic) id /* block */ callback;
@property (retain, nonatomic) WAAppActionSheet *actionSheet;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) int choosId;
@property (nonatomic) BOOL needExtUrl;
@property (retain, nonatomic) EditVideoLogicItem *editVideoLogicItem;
@property (nonatomic) unsigned long long compostionStartTime;
@property (retain, nonatomic) NSDictionary *compositionProps;
@property (nonatomic) unsigned int editFlag;
@property (nonatomic) long long from;
@property (retain, nonatomic) UIImage *thumbImage;
@property (nonatomic) long long ssid;
@property (nonatomic) unsigned long long entranceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithVideoPath:(id)a0 andDelegate:(id)a1;
+ (id)createWithAsset:(id)a0 andDelegate:(id)a1;
+ (id)createWithCallback:(id)a0 options:(id)a1 callback:(id /* block */)a2;

- (id)init;
- (void)viewDidLoad;
- (void)initThumbView;
- (void)viewWillAppear:(BOOL)a0;
- (void)onClickEditVideoBackBarButton;
- (void)onClickEditVideoDoneBarButton;
- (id)currentViewController;
- (BOOL)directToolBars;
- (BOOL)inToolBars:(id)a0;
- (id)getToolBars;
- (id)getButtonOptions;
- (float)getMinDuration;
- (float)getMaxDuration;
- (void)compositeVideo;
- (BOOL)isVideoSizeReachLimit;
- (void)ifAssetHasOriginVideoThenDo:(id /* block */)a0 elseDo:(id /* block */)a1;
- (void)handleForNotEdit;
- (void)handleForNotEditVideoFile:(id)a0 andRename:(id)a1;
- (void)handleForAsset:(id)a0;
- (void)handleForVideoPath:(id)a0;
- (void)handleCompoitionResult:(BOOL)a0 outFile:(id)a1;
- (void)handleForNotEditSucceed:(id)a0;
- (void)handleCompoitionSucceed:(id)a0;
- (void)notifyResult:(int)a0 dic:(id)a1;
- (void)notifyCompositionError:(int)a0 errmsg:(id)a1;
- (void)handleCompositionErrorWithMessage:(id)a0;
- (void)handleUnkonwInputOnMainThread;
- (void)showCompositionFailedTips;
- (void)showActionSheet;
- (id)menubuttonTitleArray;
- (void)onWAActionSheetCancel;
- (void)onWAActionSheetClickButtonWithButtonTitle:(id)a0;
- (void)onWAActionSheetClickStateView;
- (void)onWAActionSheetDestruct;
- (void)onWAActionSheetInfoClicked;
- (void)onWAActionSheetWillDismiss;
- (void)onWAActionSheetDidDismiss;
- (void)trackEventExplosured;
- (void)trackEventCancel;
- (void)trackEventNotEditResult:(id)a0;
- (void)trackEventComposition:(BOOL)a0 outputFile:(id)a1;
- (void)setupEditFlag:(id)a0;
- (id)buildCompositionProps:(id)a0;
- (void)recordVideoEditAttrForPost:(id)a0;
- (id)reportObjWithPosition:(long long)a0 action:(long long)a1;
- (unsigned long long)calculateCompostionDuration;
- (void).cxx_destruct;

@end
