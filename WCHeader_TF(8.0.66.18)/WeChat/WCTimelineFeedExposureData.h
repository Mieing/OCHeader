@class NSString;

@interface WCTimelineFeedExposureData : MMObject

@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) double feedheight;
@property (nonatomic) double stayTimeRelative;
@property (nonatomic) double realScreenHeight;
@property (nonatomic) double realShowTime;
@property (nonatomic) int likeCount;
@property (nonatomic) int commentCount;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) int likeCnt;
@property (nonatomic) int commCnt;
@property (retain, nonatomic) NSString *clickList;
@property (retain, nonatomic) NSString *livePhotoList;
@property (nonatomic) int expoCnt;
@property (nonatomic) double mediaTime;
@property (nonatomic) BOOL isWs;
@property (nonatomic) BOOL isWsBlock;
@property (nonatomic) long long snsFeedTailType;
@property (nonatomic) long long picCmtCnt;
@property (nonatomic) long long emoCmtCnt;
@property (nonatomic) unsigned long long locationIndex;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) BOOL isAd;
@property (nonatomic) int objectType;

- (id)toString;
- (void).cxx_destruct;

@end
