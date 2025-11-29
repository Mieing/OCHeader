@class NSString, NSMutableArray, HTSLiveAudioBGData;

@interface HTSLiveGuestLinkChannelInfo : IESLivePBBaseMessage

@property (nonatomic) long long channelId;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) NSMutableArray *channelUsersArray;
@property (readonly, nonatomic) unsigned long long channelUsersArray_Count;
@property (nonatomic) long long score;
@property (nonatomic) long long callDuration;
@property (nonatomic) long long startTimeMs;
@property (nonatomic) long long version;
@property (nonatomic) long long linkThreshold;
@property (nonatomic) long long channelUserCount;
@property (copy, nonatomic) NSString *scoreStr;
@property (retain, nonatomic) HTSLiveAudioBGData *channelBackground;
@property (nonatomic) BOOL hasChannelBackground;

+ (id)descriptor;

@end
