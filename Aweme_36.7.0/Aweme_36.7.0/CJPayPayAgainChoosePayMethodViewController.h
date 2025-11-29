@class NSString, CJPayBytePayMethodView, UITableViewCell, NSDictionary, CJPayIntegratedChannelModel, CJPayDefaultChannelShowConfig;
@protocol CJPayPayAgainChoosePayMethodDelegate;

@interface CJPayPayAgainChoosePayMethodViewController : CJPayHalfPageBaseViewController <CJPayMethodTableViewDelegate>

@property (retain, nonatomic) CJPayBytePayMethodView *payMethodView;
@property (retain, nonatomic) CJPayIntegratedChannelModel *cardListModel;
@property (retain, nonatomic) UITableViewCell *currentSelectedCell;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *currentChannelShowConfig;
@property (nonatomic) BOOL isCombinePay;
@property (nonatomic) unsigned long long combineType;
@property (copy, nonatomic) NSDictionary *payDisabledFundID2ReasonMap;
@property (nonatomic) BOOL isSkipPwd;
@property (nonatomic) unsigned long long showStyle;
@property (weak, nonatomic) id<CJPayPayAgainChoosePayMethodDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSelectAtIndex:(int)a0;
- (void)p_trackerWithEventName:(id)a0 params:(id)a1;
- (void)p_tracker;
- (void)didChangeCreditPayInstallment:(id)a0;
- (void)didSelectAtIndex:(int)a0 methodCell:(id)a1;
- (id)p_buildModels;
- (id)initWithEcommerceViewModel:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
