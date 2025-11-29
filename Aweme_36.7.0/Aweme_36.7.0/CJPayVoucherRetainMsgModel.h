@class NSString, NSArray, CJPayHomePageFoldVoucherInfoModel;

@interface CJPayVoucherRetainMsgModel : JSONModel

@property (copy, nonatomic) NSString *leftMsg;
@property (copy, nonatomic) NSString *leftMsgType;
@property (copy, nonatomic) NSString *rightMsg;
@property (copy, nonatomic) NSString *rightMsgDesc;
@property (nonatomic) long long voucherType;
@property (copy, nonatomic) NSString *tagMsg;
@property (copy, nonatomic) NSString *tagPosition;
@property (nonatomic) BOOL choose;
@property (copy, nonatomic) NSString *standardShowAmount;
@property (copy, nonatomic) NSArray *voucherNoList;
@property (nonatomic) BOOL isRetainTypeDefault;
@property (copy, nonatomic) NSString *voucherShowStyle;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSString *standardVoucherLabel;
@property (retain, nonatomic) CJPayHomePageFoldVoucherInfoModel *homePageFoldVoucherInfoModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (void).cxx_destruct;

@end
