@class NSString;

@interface WCTimelineFeedExposureInfo : MMObject

@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) double exposurePosiY;
@property (nonatomic) double exposureHeight;
@property (nonatomic) double originPosiY;
@property (nonatomic) double originHeight;
@property (nonatomic) double realScreenHeight;
@property (nonatomic) int likeCount;
@property (nonatomic) int commentCount;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) int expoCnt;
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
- (double)getSelfExposurePercent;
- (double)getScreenExposurePercent;
- (void).cxx_destruct;

@end
