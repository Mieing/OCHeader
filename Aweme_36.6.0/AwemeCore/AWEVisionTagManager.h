@class NSDictionary, NSMutableArray, NSString;

@interface AWEVisionTagManager : NSObject

@property (retain, nonatomic) NSMutableArray *dismissTagAwemeIdArray;
@property (copy, nonatomic) NSDictionary *pauseTagConfig;
@property (copy, nonatomic) NSDictionary *pauseCouponTagConfig;
@property (copy, nonatomic) NSString *currentDismissAwemeId;
@property (copy, nonatomic) id /* block */ primaryActionBlock;
@property (copy, nonatomic) id /* block */ secondaryActionBlock;

+ (id)getSearchStickerModelWithVtagDefaultData:(id)a0;
+ (BOOL)showCircleSearchTagSwitch;
+ (id)getSearchFromWithStickModel:(id)a0;
+ (id)getTagCategoryWithTagSpace:(id)a0;
+ (id)sharedInstance;

- (BOOL)checkAwemeDismissTagByUser:(id)a0;
- (BOOL)canShowCouponTag;
- (void)clearDrawTagShowNotClick;
- (void)clearCouponTagShowNotClick;
- (BOOL)canShowDrawTag;
- (void)recordDrawTagShowNotClick:(id)a0;
- (void)recordCouponTagShowNotClick:(id)a0;
- (id)showVisionTagLongPressPanelPrimaryActionBlock:(id /* block */)a0 secondaryActionBlock:(id /* block */)a1;
- (void)addDismissTagAwemeId:(id)a0;
- (long long)getCouponTagTimesLeaveMaxTime;
- (BOOL)getCouponTagTimesLeaveEnable;
- (long long)getCouponTagTimesLeaveBackSeconds;
- (long long)getDrawTagTimesLeaveMaxTime;
- (BOOL)getDrawTagTimesLeaveEnable;
- (long long)getDrawTagTimesLeaveBackSeconds;
- (void).cxx_destruct;
- (void)secondaryButtonClicked;
- (void)primaryButtonClicked;

@end
