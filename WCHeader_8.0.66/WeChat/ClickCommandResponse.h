@class WuRaoTips, NSData, NSMutableArray, BaseResponse;

@interface ClickCommandResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) WuRaoTips *wuRaoTips;
@property (retain, nonatomic) NSData *cookie;
@property (retain, nonatomic) NSMutableArray *sysMsgTipsList;

+ (void)initialize;

@end
