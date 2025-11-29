@class PardusResultActionInfo, PardusResultShowInfo;

@interface PardusResult : WXPBGeneratedMessage

@property (retain, nonatomic) PardusResultShowInfo *showInfo;
@property (retain, nonatomic) PardusResultActionInfo *actionInfo;

+ (void)initialize;

@end
