@class NSString, CJPayAppUserInfo;

@interface CJPayRecommendPopup : JSONModel

@property (copy, nonatomic) NSString *popupType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *merchantBizIcon;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *buttonAction;
@property (copy, nonatomic) NSString *promotionDesc;
@property (retain, nonatomic) CJPayAppUserInfo *recommendUserInfo;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
