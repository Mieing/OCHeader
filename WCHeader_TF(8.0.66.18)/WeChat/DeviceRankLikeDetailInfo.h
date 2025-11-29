@class NSString;

@interface DeviceRankLikeDetailInfo : MMObject

@property (retain, nonatomic) NSString *nsUserName;
@property (nonatomic) unsigned int uiLikeTime;
@property (retain, nonatomic) NSString *nsRankId;
@property (retain, nonatomic) NSString *nsLikeTip;

- (void).cxx_destruct;

@end
