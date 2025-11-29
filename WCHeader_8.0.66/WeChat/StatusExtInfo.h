@class NSMutableArray, NSString, StatusLocation, NSData, StatusTopicInfo, StatusEmoji;

@interface StatusExtInfo : WXPBGeneratedMessage <YYModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double longitude;
@property (nonatomic) double latitude;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) StatusTopicInfo *topicInfo;
@property (retain, nonatomic) NSString *mediaUrl;
@property (retain, nonatomic) NSString *mediaAesKey;
@property (retain, nonatomic) NSString *mediaThumbUrl;
@property (retain, nonatomic) NSString *mediaThumbAesKey;
@property (nonatomic) unsigned int visibility;
@property (retain, nonatomic) NSString *description;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int expireTime;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *poiName;
@property (nonatomic) unsigned long long extOption;
@property (nonatomic) int mediaWidth;
@property (nonatomic) int mediaHeight;
@property (retain, nonatomic) NSString *backgroundId;
@property (retain, nonatomic) NSData *deprecatedBuffer;
@property (retain, nonatomic) StatusEmoji *emojiInfo;
@property (nonatomic) unsigned int modifyTime;
@property (nonatomic) unsigned int modifyCount;
@property (nonatomic) unsigned int serverCreateTime;
@property (retain, nonatomic) NSString *referenceUsername;
@property (retain, nonatomic) NSString *referenceTextStatusId;
@property (nonatomic) unsigned int sceneType;
@property (retain, nonatomic) NSString *duplicateUsername;
@property (retain, nonatomic) NSString *duplicateTextStatusId;
@property (retain, nonatomic) NSString *activityToken;
@property (nonatomic) unsigned int profileSeq;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) StatusEmoji *emoji;
@property (retain, nonatomic) NSString *clientMsgId;
@property (retain, nonatomic) NSMutableArray *blackContactLabelIds;
@property (retain, nonatomic) NSMutableArray *blackContactUsernames;
@property (retain, nonatomic) StatusLocation *location;
@property (nonatomic) unsigned long long enterScene;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSMutableArray *medias;
@property (nonatomic) unsigned long long mediaDurationMs;
@property (nonatomic) BOOL hasHb;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (void)initialize;


@end
