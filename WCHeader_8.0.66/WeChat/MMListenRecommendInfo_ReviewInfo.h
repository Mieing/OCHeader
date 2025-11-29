@class NSString, MMListenUserInfo;

@interface MMListenRecommendInfo_ReviewInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isThumbUp;
@property (nonatomic) unsigned long long thumbUpCount;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) MMListenUserInfo *userInfo;
@property (nonatomic) BOOL isMine;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *voiceUrl;
@property (nonatomic) unsigned long long voiceDuration;
@property (nonatomic) BOOL enableAddReview;
@property (nonatomic) unsigned int voiceRecordVolume;
@property (retain, nonatomic) NSString *voiceTts;

+ (void)initialize;

@end
