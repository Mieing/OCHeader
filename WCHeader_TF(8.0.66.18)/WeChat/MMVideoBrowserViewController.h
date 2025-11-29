@class NSString, WCActionSheet, MMVideoBrowserViewModel;

@interface MMVideoBrowserViewController : MMMediaBrowserViewController <RecentForwardScrollViewDelegate, WCActionSheetDelegate>

@property (retain, nonatomic) WCActionSheet *saveActionSheet;
@property (readonly, nonatomic) MMVideoBrowserViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (BOOL)onSingleTap;
- (void)setupScrollActionSheet;
- (void)addActionSheetItem:(unsigned int)a0 iconImage:(id)a1 title:(id)a2 toArray:(id)a3;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (BOOL)showActionSheetBeforeSaveToAlbum;
- (void)handleSaveVideoToAlbum;
- (void)saveVideoWithAsset:(id)a0;
- (void)saveVideoWithFilePath:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void).cxx_destruct;

@end
