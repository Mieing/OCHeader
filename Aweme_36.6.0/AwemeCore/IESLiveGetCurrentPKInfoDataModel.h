@class NSNumber, NSString;

@interface IESLiveGetCurrentPKInfoDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *leftScore;
@property (retain, nonatomic) NSNumber *rightScore;
@property (retain, nonatomic) NSNumber *pkResult;
@property (retain, nonatomic) NSNumber *punishTime;
@property (retain, nonatomic) NSNumber *remainTime;
@property (copy, nonatomic) NSString *pkId;
@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *pkRivalName;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
