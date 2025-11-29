@class NSString, NSDictionary;

@interface AWEECOMIMProductSkuConsultInfoModel : NSObject

@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *skuId;
@property (copy, nonatomic) NSDictionary *channelParams;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *skuSessionId;
@property (copy, nonatomic) NSString *hierarchicalDimension;
@property (copy, nonatomic) NSString *serverMessageId;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *senderRole;

- (void).cxx_destruct;

@end
