@class NSNumber, NSDictionary, NSString;

@interface IESLiveRevenueSendStreamXEventParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *event;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *rtcKey;
@property (copy, nonatomic) NSString *layoutKey;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
