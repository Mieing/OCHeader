@class NSIndexPath, NSString, NSArray, LocationRetriever, NSMutableDictionary, NSMutableArray, UIViewController, MMTableView, MMRegionCodeMgr;
@protocol MMRegionPickerReturnDelegate, MMRegionPickerViewControllerDelegate;

@interface MMRegionPickerViewController : MMUIViewController <ILocationMgrExt, UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate, MMRegionPickerReturnDelegate> {
    MMTableView *m_tableView;
    NSMutableDictionary *m_dataDict;
    NSMutableArray *m_dataAry;
    BOOL m_isInitRegionCode;
    MMRegionCodeMgr *m_regionCodeMgr;
    LocationRetriever *_locationRetriever;
    int m_iLocationRetrieveResult;
    NSMutableArray *m_arrServerReturnCode;
    BOOL m_bInCurrent;
    NSIndexPath *m_oCurrentIndexPath;
}

@property (nonatomic) unsigned long long authScene;
@property (nonatomic) BOOL isTopLevel;
@property (weak, nonatomic) id<MMRegionPickerViewControllerDelegate> delegate;
@property (weak, nonatomic) id<MMRegionPickerReturnDelegate> returnDelegate;
@property (weak, nonatomic) UIViewController *topController;
@property (retain, nonatomic) NSString *selectedRegionCode;
@property (retain, nonatomic) NSMutableArray *pickedRegionAry;
@property (retain, nonatomic) NSArray *arrCurRegionCodes;
@property (nonatomic) int regionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithArray:(id)a0 withAuthScene:(unsigned long long)a1;
- (void)initData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)tryRetrieveLocation;
- (void)onRetrieveLocationOK:(id)a0;
- (void)onRetrieveLocationTimeOut:(id)a0;
- (void)onRetrieveLocationError:(int)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)OnDataChange;
- (void)OnReturn;
- (void)OnDone;
- (void)scrollToRegion:(id)a0;
- (BOOL)isLocationRetrieving;
- (BOOL)isLocationSection:(long long)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)headerLabelWithTitle:(id)a0;
- (void)clarifyCurrentPickedRegionsWith:(id)a0;
- (void)OnNeedReturn;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)a0;
- (void).cxx_destruct;

@end
