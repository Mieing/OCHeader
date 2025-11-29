@class NSNumber, NSString;

@interface IESLiveFormatSendGiftParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *giftId;
@property (copy, nonatomic) NSString *toUserId;
@property (retain, nonatomic) NSNumber *giftCount;
@property (copy, nonatomic) NSString *giftSource;
@property (retain, nonatomic) NSNumber *giftBuffLevel;
@property (retain, nonatomic) NSNumber *giftPrice;
@property (copy, nonatomic) NSString *trackJsonString;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
