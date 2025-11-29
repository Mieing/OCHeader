@class NSString, GameCenterMsgV2Node, GameJumpInfo, GameCenterMsgSourceInfo, NSMutableArray;

@interface GameCenterMsgCenterContent : NSObject

@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *headJumpUrl;
@property (retain, nonatomic) NSString *nickNameJumpUrl;
@property (retain, nonatomic) NSString *badgeIconUrl;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSMutableArray *mergeUserList;
@property (retain, nonatomic) NSMutableArray *mergeUserInfoV2Array;
@property (retain, nonatomic) NSString *firstLineContent;
@property (retain, nonatomic) NSString *secondLineContent;
@property (retain, nonatomic) NSString *secondLineIconUrl;
@property (retain, nonatomic) GameJumpInfo *secondLineJumpInfo;
@property (retain, nonatomic) NSString *contentPicUrl;
@property (retain, nonatomic) GameJumpInfo *contentPicJumpInfo;
@property (nonatomic) double firstLineHeight;
@property (nonatomic) double secondLineHeight;
@property (nonatomic) unsigned int msgRecvTime;
@property (nonatomic) unsigned int createTime;
@property (retain, nonatomic) GameCenterMsgSourceInfo *sourceInfo;
@property (retain, nonatomic) GameJumpInfo *msgCardInfo;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int msgReportType;
@property (nonatomic) unsigned int localId;
@property (retain, nonatomic) NSString *svrMsgId;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *reportExtData;
@property (nonatomic) unsigned int alreadyMergedCount;
@property (nonatomic) BOOL isGreet;
@property (nonatomic) unsigned int relationType;
@property (retain, nonatomic) GameCenterMsgV2Node *v2Node;

- (id)interactCellModel;
- (void).cxx_destruct;

@end
