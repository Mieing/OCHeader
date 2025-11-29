@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEPickPanelBottomViewModel : NSObject

@property (nonatomic) BOOL isPicked;
@property (nonatomic) long long pickCount;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ pickStatusDidChangeBlock;
@property (copy, nonatomic) id /* block */ updateBottomViewStyleAfterPickStatusChange;

- (void)handlePickButtonTapped;
- (void)handleAlertDialogTapped:(id)a0;
- (void)trackCancelToastShow;
- (id)initWithAwemeModel:(id)a0 enterFrom:(id)a1 referString:(id)a2 params:(id)a3;
- (void)handlePickStatusChanged:(id)a0;
- (void)trackPickButtonClick:(long long)a0;
- (void)handleAlertDialogCancelConfirm;
- (void)trackAlertDialogClick:(id)a0;
- (void)updatePickQuota:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;
- (void)setupData;

@end
