@class NSNumber, NSString;

@interface IESLiveChangeSTTempStateParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSNumber *strategy;
@property (retain, nonatomic) NSNumber *showTime;
@property (copy, nonatomic) NSString *type;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
