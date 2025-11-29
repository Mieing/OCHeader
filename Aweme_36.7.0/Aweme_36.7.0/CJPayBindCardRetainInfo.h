@class NSString;
@protocol CJPayTrackerProtocol;

@interface CJPayBindCardRetainInfo : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrls;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *creditMsg;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *merchantId;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) NSString *controlFrequencyStr;
@property (copy, nonatomic) NSString *buttonMsg;
@property (copy, nonatomic) NSString *isNeedSaveUserInfo;
@property (nonatomic) BOOL isHadShowRetain;
@property (copy, nonatomic) NSString *cardType;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)p_titleLabel;
- (id)p_bankVoucherView;
- (id)p_buildVoucherItemViewWithMsg:(id)a0;
- (id)generateRetainView;
- (id)p_voucherViewArray;
- (void).cxx_destruct;

@end
