@class NSString;

@interface TokeMess : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *packageex;
@property (retain, nonatomic) NSString *sign;
@property (retain, nonatomic) NSString *signType;
@property (nonatomic) unsigned int checkPwdScene;
@property (retain, nonatomic) NSString *busiId;

+ (void)initialize;

@end
