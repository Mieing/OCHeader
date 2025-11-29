@class NSString, SportRecord;

@interface DeviceRankLikeCellInfo : MMObject

@property (retain, nonatomic) NSString *nsUserName;
@property (nonatomic) unsigned int uiScore;
@property (nonatomic) unsigned int uiRankNum;
@property (nonatomic) unsigned int uiLikeCount;
@property (nonatomic) unsigned int uiLikeState;
@property (retain, nonatomic) SportRecord *record;

- (void).cxx_destruct;

@end
