@class NSString, NSDictionary;

@interface LSIMSendCardMessageParamsModel : NSObject

@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardBizType;
@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *staticData;
@property (copy, nonatomic) NSString *bizKey;
@property (copy, nonatomic) NSString *cardTrackData;
@property (copy, nonatomic) NSDictionary *cardData;

- (void).cxx_destruct;

@end
