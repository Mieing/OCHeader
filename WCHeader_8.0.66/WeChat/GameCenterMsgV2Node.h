@class GameJumpInfo, GameCenterMsgSender, NSString;

@interface GameCenterMsgV2Node : NSObject

@property (nonatomic) BOOL dontShowInMsgCenter;
@property (retain, nonatomic) GameCenterMsgSender *msgSender;
@property (retain, nonatomic) GameJumpInfo *jumpInfo;
@property (retain, nonatomic) GameJumpInfo *mergeJumpInfo;
@property (retain, nonatomic) GameJumpInfo *commentJumpInfo;
@property (retain, nonatomic) NSString *primaryContent;
@property (retain, nonatomic) NSString *minorContent;
@property (retain, nonatomic) NSString *pictureUrl;
@property (retain, nonatomic) NSString *sourceName;
@property (retain, nonatomic) NSString *mergeId;
@property (nonatomic) unsigned int mergeCount;
@property (nonatomic) BOOL notInMsgCenter;
@property (retain, nonatomic) NSString *actionDesc;
@property (retain, nonatomic) NSString *actionText;
@property (retain, nonatomic) NSString *quoteText;
@property (retain, nonatomic) NSString *quickResponseId;
@property (nonatomic) unsigned int quickResponseFlag;

- (void).cxx_destruct;

@end
