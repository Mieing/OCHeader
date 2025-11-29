@class NSString;

@interface IESLiveSendSocketDataParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *socketTaskID;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) NSString *dataType;

- (void).cxx_destruct;

@end
