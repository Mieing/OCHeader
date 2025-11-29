@class AWEAwemeModel, UIView, DUXContentSheet, NSString, AWEVideoPlayDanmakuModel, UIImageView, UITableView, AWEDanmakuMorePanelDataController, UILabel;
@protocol AWEDanmakuMorePanelDelegate;

@interface AWEDanmakuMorePanelViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, DUXSheetDelegate>

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftQuotationImageView;
@property (retain, nonatomic) UIImageView *rightQuotationImageView;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) DUXContentSheet *sheet;
@property (retain, nonatomic) AWEVideoPlayDanmakuModel *danmakuModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDanmakuMorePanelDataController *dataController;
@property (nonatomic) double titleLabelHeight;
@property (nonatomic) BOOL reportFromMorePanel;
@property (weak, nonatomic) id<AWEDanmakuMorePanelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (void)showWithAwemeModel:(id)a0 danmakuModel:(id)a1 delegate:(id)a2;

- (double)panelHeight;
- (void)sheetDidDismiss:(id)a0;
- (id)aAWEPadModuleAdapter;
- (id)initWithAwemeModel:(id)a0 danmakuModel:(id)a1;
- (void)updateViewController;
- (id)attributedString:(id)a0;
- (double)calculateTitleLabelHeight;
- (double)titleLabelLineHeight;
- (void).cxx_destruct;
- (double)headerViewHeight;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (id)titleLabelFont;

@end
