@class NSString;

@interface NotAutoSucceedReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *originTpusername;
@property (retain, nonatomic) NSString *heirTpusername;
@property (retain, nonatomic) NSString *succeedTicket;
@property (nonatomic) int action;

+ (void)initialize;

@end
