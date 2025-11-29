@class NSArray, NSString;
@protocol CJPayDyPayPromotionActivity;

@interface CJPayDyPayPromotionVoucherInfo : JSONModel

@property (copy, nonatomic) NSArray<CJPayDyPayPromotionActivity> *promotionActivitys;
@property (copy, nonatomic) NSString *promotionPrefix;
@property (copy, nonatomic) NSString *promotionDesc;
@property (nonatomic) BOOL isShowVoucherPage;
@property (nonatomic) long long loadLynxViewTimeLimit;
@property (copy, nonatomic) NSString *voucherPageTitleImg;
@property (copy, nonatomic) NSArray *promotionActivitysTrack;
@property (copy, nonatomic) NSString *promotionStyle;
@property (copy, nonatomic) NSString *promotionScheme;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)getActivityArrayTrackParam;
- (void).cxx_destruct;

@end
