@class WAShareAppMessageContextSpecialNativeGameCardModel, NSString, WAAppMsgItem, WAShareAppMessageContextSpecialWeishiModel, WAShareAppMessageThumbImagePool, NSArray, WAShareAppMessageContextSpecialGameRecordModel;

@interface WAShareAppMessageContextModel : NSObject

@property (nonatomic) unsigned long long shareType;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) unsigned int debugModeType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *appMediaUrl;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *sourceDisplayname;
@property (copy, nonatomic) NSString *sourceUsername;
@property (retain, nonatomic) WAAppMsgItem *WeAppMsgItem;
@property (retain, nonatomic) WAShareAppMessageContextSpecialWeishiModel *weishiModel;
@property (retain, nonatomic) WAShareAppMessageContextSpecialGameRecordModel *gameRecordModel;
@property (retain, nonatomic) WAShareAppMessageContextSpecialNativeGameCardModel *nativeGameCardModel;
@property (copy, nonatomic) NSString *thumbImageKey;
@property (copy, nonatomic) NSString *thumbUrl;
@property (copy, nonatomic) NSString *fromAppName;
@property (nonatomic) BOOL bMutliContact;
@property (retain, nonatomic) NSString *messageExtraData;
@property (retain, nonatomic) WAShareAppMessageThumbImagePool *thumbImagePool;
@property (nonatomic) int cardType;
@property (nonatomic) BOOL shouldUseUpdatableShare;
@property (copy, nonatomic) NSString *updatableShareTemplateId;
@property (nonatomic) BOOL isToDoMessage;
@property (retain, nonatomic) NSString *toDoActivityId;
@property (nonatomic) BOOL isPrivateMessage;
@property (readonly, nonatomic) BOOL shouldSendGetShareInfoCGI;
@property (nonatomic) BOOL useForChatTool;
@property (retain, nonatomic) NSString *chatroomUsername;
@property (retain, nonatomic) NSArray *participant;
@property (nonatomic) unsigned int chooseType;
@property (retain, nonatomic) NSString *chatToolMode;
@property (nonatomic) unsigned int selectType;
@property (retain, nonatomic) NSArray *chatRoomInfos;
@property (retain, nonatomic) NSString *chatToolMsgId;

- (void).cxx_destruct;

@end
