@class NSNumber, NSString;

@interface IESLiveSendEffectMessageParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *msgID;
@property (retain, nonatomic) NSNumber *arg1;
@property (retain, nonatomic) NSNumber *arg2;
@property (copy, nonatomic) NSString *arg3;
@property (copy, nonatomic) NSString *channel;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
