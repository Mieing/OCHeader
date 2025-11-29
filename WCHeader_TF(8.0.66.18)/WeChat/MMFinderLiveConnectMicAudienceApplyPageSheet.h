@class UIView, NSString, UITableView;
@protocol MMFinderLiveConnectMicAudienceApplyPageSheetDelegate;

@interface MMFinderLiveConnectMicAudienceApplyPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *separatorBar;
@property (weak, nonatomic) id<MMFinderLiveConnectMicAudienceApplyPageSheetDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAutoConnect:(BOOL)a0 isInPk:(BOOL)a1;
- (void)cancelAnimated:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateNavLeftButton;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)onCameraSettingsTapped;
- (void)oCloseButtonTapped;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)initializeComponentsWithAutoConnect:(BOOL)a0 isInPk:(BOOL)a1;
- (double)detailViewHeight;
- (void).cxx_destruct;

@end
