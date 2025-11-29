@class NSMutableArray, RoamMsgList;

@interface RoamPackage : WXPBGeneratedMessage

@property (retain, nonatomic) RoamMsgList *msgList;
@property (retain, nonatomic) NSMutableArray *mediaInfoList;

+ (void)initialize;

@end
