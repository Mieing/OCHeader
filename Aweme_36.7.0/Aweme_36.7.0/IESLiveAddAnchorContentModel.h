@class NSString, NSNumber;

@interface IESLiveAddAnchorContentModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *couponActivityId;
@property (retain, nonatomic) NSNumber *orderId;
@property (retain, nonatomic) NSNumber *channel;
@property (copy, nonatomic) NSString *bizSource;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
