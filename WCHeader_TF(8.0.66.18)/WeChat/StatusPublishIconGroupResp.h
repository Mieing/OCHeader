@class NSString, NSMutableArray;

@interface StatusPublishIconGroupResp : WXPBGeneratedMessage

@property (nonatomic) BOOL result;
@property (nonatomic) int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSMutableArray *iconGroups;

+ (void)initialize;

@end
