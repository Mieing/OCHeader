@class NSString, NSArray, MMStepSlider, UIView, UITableView;

@interface NewSettingFontSizeViewController : MMUIViewController <MMStepSliderDelegate, UITableViewDataSource, UITableViewDelegate> {
    unsigned int m_curLevel;
    double m_uiCurSize;
    NSArray *m_allLevel;
    UITableView *_tableView1;
    MMStepSlider *_sliderView;
    UIView *_bottomView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)OnCancel;
- (void)OnSave;
- (void)saveFontChange;
- (void)configData;
- (void)configTableView1;
- (void)viewWillLayoutSubviews;
- (float)calculateSlidingWidth;
- (void)configBottomView;
- (void)viewDidLayoutSubviews;
- (void)mmSliderViewChange:(unsigned int)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)makeCell:(id)a0 isSender:(BOOL)a1 andText:(id)a2;
- (id)genMsgLabel:(id)a0 isSender:(BOOL)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;

@end
