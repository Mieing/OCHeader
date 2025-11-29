@class HTSLiveUser, NSString, HTSLiveCommon, HTSLiveText, HTSLiveOriginRoomInfo, HTSLivePublicAreaCommon;

@interface HTSLiveWorldChatData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long msgId;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (copy, nonatomic) NSString *msgIdStr;
@property (retain, nonatomic) HTSLiveOriginRoomInfo *originRoom;
@property (nonatomic) BOOL hasOriginRoom;
@property (nonatomic) long long eventTime;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;

+ (id)descriptor;

@end
