@class MMLoadingView, NSString, MMPickerView, WCMemoryStatRecord, NSArray, NSDateFormatter, UIButton;

@interface MMMSUploadViewController : MMMSBaseViewController <MemoryStatManagerExt, MMPickerViewDelegate> {
    UIButton *m_selectButton;
    UIButton *m_uploadButton;
    MMLoadingView *m_loadingViewX;
    MMPickerView *m_pickView;
    WCMemoryStatRecord *m_selectedRecord;
    NSArray *m_recordList;
    NSDateFormatter *m_dateFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)layoutViews;
- (void)layoutSelectButtonAndTips:(int *)a0;
- (void)updateSelectButtonTitle;
- (void)layoutUploadButton:(int *)a0;
- (void)startLoadingBlocked;
- (void)startLoadingBlockedWithText:(id)a0;
- (void)stopLoading;
- (void)onSelectButtonClicked:(id)a0;
- (void)onUploadButtonClicked:(id)a0;
- (void)MMPickerViewDidChooseRow:(long long)a0 atSession:(long long)a1;
- (void)onMemoryRecordUploadCompleted:(BOOL)a0;
- (void).cxx_destruct;

@end
