@class NSString, NSArray, CJPayRetainRecommendInfoModel;
@protocol CJPayRetainMsgModel;

@interface CJPayBDRetainInfoModel : JSONModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *retainMsgBonusStr;
@property (copy, nonatomic) NSString *retainMsgText;
@property (copy, nonatomic) NSString *retainType;
@property (nonatomic) BOOL showRetainWindow;
@property (copy, nonatomic) NSString *retainPlan;
@property (copy, nonatomic) NSString *retainButtonText;
@property (copy, nonatomic) NSString *choicePwdCheckWay;
@property (copy, nonatomic) NSString *choicePwdCheckWayTitle;
@property (nonatomic) BOOL showChoicePwdCheckWay;
@property (copy, nonatomic) NSString *forgetPwdVerfyType;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSArray<CJPayRetainMsgModel> *retainMsgTextList;
@property (copy, nonatomic) NSArray<CJPayRetainMsgModel> *retainMsgBonusList;
@property (readonly, nonatomic) long long voucherType;
@property (nonatomic) BOOL needVerifyRetain;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) CJPayRetainRecommendInfoModel *recommendInfoModel;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

- (BOOL)isfeatureRetain;
- (void).cxx_destruct;

@end
