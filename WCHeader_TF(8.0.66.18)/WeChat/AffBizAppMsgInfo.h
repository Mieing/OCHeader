@class NSString, NSMutableArray, AffBizAppMsgBaseInfo;

@interface AffBizAppMsgInfo : WXPBGeneratedMessage

@property (retain, nonatomic) AffBizAppMsgBaseInfo *baseInfo;
@property (retain, nonatomic) NSMutableArray *detailInfo;
@property (retain, nonatomic) NSString *uniqueId;

+ (void)initialize;

@end
