@class NSString, CJPayPayAndXShowInfoModel, CJPayDyPayPlusXModel, NSArray;

@interface CJPayDyPayPlusXViewModel : NSObject

@property (retain, nonatomic) CJPayDyPayPlusXModel *plusXModel;
@property (retain, nonatomic) CJPayPayAndXShowInfoModel *payAndXShowInfo;
@property (nonatomic) unsigned long long plusXType;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *headerIconURLStr;
@property (copy, nonatomic) NSArray *voucherStrArray;
@property (nonatomic) BOOL switchIsOn;
@property (copy, nonatomic) id /* block */ plusXModuleDidClick;
@property (copy, nonatomic) id /* block */ switchDidClick;
@property (copy, nonatomic) id /* block */ plusXModuleDidFold;
@property (copy, nonatomic) NSString *followPrefixStr;
@property (copy, nonatomic) NSString *followUserName;
@property (copy, nonatomic) NSString *followIconUrl;
@property (copy, nonatomic) NSString *voucherBGColorStr;
@property (copy, nonatomic) NSString *voucherButtonActionStr;
@property (nonatomic) BOOL isFold;
@property (copy, nonatomic) id /* block */ protocolClickBlock;
@property (copy, nonatomic) NSString *freeLoginIconUrl;
@property (copy, nonatomic) NSString *freeLoginTitleStr;
@property (copy, nonatomic) NSString *freeLoginSubTitleStr;
@property (copy, nonatomic) NSString *freeLoginActionStr;
@property (nonatomic) unsigned long long plusXActionType;
@property (copy, nonatomic) id /* block */ freeLoginChangeBlock;

- (id)initWithDefaultConfig:(id)a0;
- (id)initWithPayAndXInfo:(id)a0;
- (BOOL)needShowPlusXView;
- (void)p_createPlusXFollowTypeViewModel;
- (void)p_createPlusXVoucherTypeViewModel;
- (void)p_createPlusXFreeLoginTypeViewModel;
- (void)p_createPlusXSignPayTypeViewModel:(id)a0;
- (void).cxx_destruct;

@end
