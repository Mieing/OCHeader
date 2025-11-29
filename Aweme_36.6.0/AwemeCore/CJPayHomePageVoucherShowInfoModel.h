@class NSArray, NSString;
@protocol CJPayHomePageVoucherMsgInfoModel;

@interface CJPayHomePageVoucherShowInfoModel : JSONModel

@property (copy, nonatomic) NSArray<CJPayHomePageVoucherMsgInfoModel> *standardVoucherMsgList;
@property (copy, nonatomic) NSArray *subPayTypeVoucherTagList;
@property (copy, nonatomic) NSString *crossedPrice;
@property (copy, nonatomic) NSString *standardShowAmount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (id)getActivityTitleStr;
- (void).cxx_destruct;

@end
