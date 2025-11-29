@class NSString, WAContact, UIView, NSMutableArray, UILabel;

@interface WAPrivacyUsageDetailViewController : ZZFLEXTableViewController <WAPrivacyUsageDetailCgiDelegate> {
    WAContact *_contact;
    NSMutableArray *_cellDataList;
    unsigned int _minUpdateTime;
    BOOL _hasNoMore;
    UIView *_emptyView;
    UILabel *_emptyLabel;
    UIView *_footerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)updateListData;
- (void)initEmptyView;
- (id)makeFooterMarginView;
- (void)initRefreshControl;
- (void)requestNextPagePrivacyUsageRecord;
- (void)getPrivacyUsageDetailCgi:(id)a0 didGetUsageDetailRecordList:(id)a1 hasNoMore:(BOOL)a2;
- (void)getPrivacyUsageDetailCgi:(id)a0 didFailWithError:(id)a1;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
