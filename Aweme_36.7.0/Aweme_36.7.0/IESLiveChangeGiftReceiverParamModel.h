@class NSNumber, NSArray, NSString;

@interface IESLiveChangeGiftReceiverParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *userId;
@property (nonatomic) BOOL isAllMic;
@property (copy, nonatomic) NSArray *userIds;
@property (copy, nonatomic) NSString *specifiedUser;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
