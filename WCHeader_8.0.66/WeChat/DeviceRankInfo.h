@class NSString, SportRecord;

@interface DeviceRankInfo : NSObject

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *rankTitle;
@property (nonatomic) unsigned int rank;
@property (nonatomic) unsigned int score;
@property (retain, nonatomic) NSString *scoreTitle;
@property (nonatomic) unsigned int likeCount;
@property (nonatomic) BOOL hasLike;
@property (nonatomic) BOOL localLike;
@property (retain, nonatomic) NSString *m_deviceId;
@property (retain, nonatomic) SportRecord *record;

- (void).cxx_destruct;

@end
