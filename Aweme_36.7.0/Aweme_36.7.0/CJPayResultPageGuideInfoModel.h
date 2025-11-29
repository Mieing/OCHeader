@class NSString;

@interface CJPayResultPageGuideInfoModel : CJPayBaseGuideInfoModel

@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSString *guideTypeStr;
@property (copy, nonatomic) NSString *confirmBtnDesc;
@property (copy, nonatomic) NSString *cancelBtnDesc;
@property (copy, nonatomic) NSString *cancelBtnLocation;
@property (copy, nonatomic) NSString *headerDesc;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *pictureUrl;
@property (copy, nonatomic) NSString *bioType;
@property (copy, nonatomic) NSString *afterOpenDesc;
@property (nonatomic) long long quota;
@property (copy, nonatomic) NSString *subTitleIconUrl;
@property (copy, nonatomic) NSString *voucherDisplayText;
@property (copy, nonatomic) NSString *subTitleColor;
@property (copy, nonatomic) NSString *guideShowStyle;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *headerPicUrl;
@property (copy, nonatomic) NSString *jumpLynxUrl;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (BOOL)isNewGuideShowStyleForOldPeople;
- (BOOL)isNewGuideShowStyle;
- (void).cxx_destruct;

@end
