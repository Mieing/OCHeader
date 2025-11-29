@class FinderPromotionMsg_MiniappMsg, NSMutableArray;

@interface FinderPromotionMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int priority;
@property (nonatomic) unsigned int msgAction;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int msgExt;
@property (retain, nonatomic) FinderPromotionMsg_MiniappMsg *miniappMsg;
@property (retain, nonatomic) NSMutableArray *pathInfos;

+ (void)initialize;

@end
