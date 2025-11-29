@class NSString, EcsJumpInfo;

@interface WCPayJumpActionItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *actionUrl;
@property (retain, nonatomic) NSString *actionAppUsername;
@property (retain, nonatomic) NSString *actionAppNickname;
@property (nonatomic) unsigned int designerUin;
@property (nonatomic) unsigned int finderProfileTabIndex;
@property (retain, nonatomic) EcsJumpInfo *ecsJumpInfo;

+ (void)initialize;

@end
