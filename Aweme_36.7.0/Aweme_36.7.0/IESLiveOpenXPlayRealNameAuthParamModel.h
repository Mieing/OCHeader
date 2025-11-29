@class NSString;

@interface IESLiveOpenXPlayRealNameAuthParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *promoteGameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *agreementText;
@property (copy, nonatomic) NSString *agreementUrl;
@property (copy, nonatomic) NSString *playType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
