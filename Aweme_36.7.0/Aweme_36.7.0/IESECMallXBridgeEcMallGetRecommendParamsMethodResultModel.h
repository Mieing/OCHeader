@class NSString, NSNumber;

@interface IESECMallXBridgeEcMallGetRecommendParamsMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *feedbacks;
@property (copy, nonatomic) NSString *filters;
@property (retain, nonatomic) NSNumber *page_num;
@property (copy, nonatomic) NSString *post_back;
@property (copy, nonatomic) NSString *last_actions;
@property (copy, nonatomic) NSString *log_extra;
@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *seckill_filters;
@property (copy, nonatomic) NSString *allowance_filters;
@property (retain, nonatomic) NSNumber *recommend_back_up_offset;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
