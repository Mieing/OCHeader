@class BaseRequest, SnsActionGroup, NSString, SKBuiltinString_t, SnsExtStatData;

@interface SnsCommentRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) SnsActionGroup *action;
@property (retain, nonatomic) NSString *clientId;
@property (retain, nonatomic) SKBuiltinString_t *snsStatExt;
@property (retain, nonatomic) NSString *reportData;
@property (retain, nonatomic) SnsExtStatData *extStatData;
@property (retain, nonatomic) NSString *clientCtxBuffer;

+ (void)initialize;

@end
