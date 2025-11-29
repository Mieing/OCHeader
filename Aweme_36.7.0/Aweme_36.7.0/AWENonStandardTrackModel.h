@class NSString, NSDictionary;

@interface AWENonStandardTrackModel : NSObject

@property (copy, nonatomic) NSString *stage;
@property (copy, nonatomic) NSString *businessScene;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *challengeName;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSString *mentionedUserID;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *anchorID;
@property (nonatomic) long long anchorType;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *taskType;
@property (copy, nonatomic) NSDictionary *trackParam;
@property (nonatomic) BOOL isChangeByUserChallengeName;
@property (nonatomic) BOOL isChangeByUserMusicID;
@property (nonatomic) BOOL isChangeByUserMentionedUserID;
@property (nonatomic) BOOL isChangeByUserStickerID;
@property (nonatomic) BOOL isChangeByUserAnchorID;
@property (nonatomic) BOOL isChangeByUserTaskID;
@property (nonatomic) BOOL isCorrectMusicInfo;
@property (nonatomic) BOOL isCorrectUserInfo;
@property (nonatomic) BOOL isCorrectAnchorInfo;
@property (nonatomic) BOOL isCorrectTagInfo;
@property (nonatomic) BOOL isCorrectTaskInfo;
@property (nonatomic) BOOL isCorrectStickerInfo;

- (void).cxx_destruct;

@end
