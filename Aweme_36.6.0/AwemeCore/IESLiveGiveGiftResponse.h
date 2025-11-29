@class HTSLiveUser, NSArray, NSDictionary, GiftSendResponse_Data, NSString, NSNumber;
@protocol IESLiveLiteGiftStructProtocol;

@interface IESLiveGiveGiftResponse : NSObject

@property (retain, nonatomic) id<IESLiveLiteGiftStructProtocol> sendedGift;
@property (retain, nonatomic) NSNumber *giftID;
@property (retain, nonatomic) NSNumber *originGiftID;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *unitPrice;
@property (retain, nonatomic) NSNumber *totalPrice;
@property (retain, nonatomic) HTSLiveUser *sugarDaddy;
@property (retain, nonatomic) NSArray *toUser;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) GiftSendResponse_Data *giftSendResponseData;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *traceID;

- (void).cxx_destruct;

@end
