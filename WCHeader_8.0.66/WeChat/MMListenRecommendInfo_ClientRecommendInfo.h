@class MMListenRecommendInfo_ClientRecommendInfo_FriendCommendListExtInfo, NSMutableArray, MMListenRecommendInfo_ClientRecommendInfo_VoiceRecommendInfo;

@interface MMListenRecommendInfo_ClientRecommendInfo : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenRecommendInfo_ClientRecommendInfo_VoiceRecommendInfo *voiceRecommendInfo;
@property (retain, nonatomic) NSMutableArray *friendComments;
@property (retain, nonatomic) MMListenRecommendInfo_ClientRecommendInfo_FriendCommendListExtInfo *friendCommendListExtInfo;
@property (nonatomic) BOOL showVipLimitIcon;

+ (void)initialize;

@end
