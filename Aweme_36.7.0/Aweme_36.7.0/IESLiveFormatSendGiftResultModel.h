@class NSNumber, NSString;

@interface IESLiveFormatSendGiftResultModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *errorMsg;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
