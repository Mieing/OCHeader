@class NSString, NSMutableArray, ChatRoomLiveExtInfo;

@interface LiveInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *liveName;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int onlineCnt;
@property (nonatomic) unsigned int messageCnt;
@property (nonatomic) unsigned int likeCnt;
@property (retain, nonatomic) NSString *replayUrl;
@property (retain, nonatomic) NSMutableArray *roomIdList;
@property (nonatomic) BOOL enableComment;
@property (nonatomic) BOOL enableApplyLiveMic;
@property (nonatomic) BOOL enableLiveReplay;
@property (retain, nonatomic) NSString *sdkUserId;
@property (retain, nonatomic) NSString *createSdkUserId;
@property (retain, nonatomic) NSString *anchorIdentityId;
@property (retain, nonatomic) NSString *defaultLiveName;
@property (nonatomic) int liveMicType;
@property (retain, nonatomic) ChatRoomLiveExtInfo *chatroomliveExtInfo;

+ (void)initialize;

@end
