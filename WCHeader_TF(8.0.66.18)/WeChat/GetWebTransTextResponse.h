@class NSString, NSMutableArray, BaseResponse;

@interface GetWebTransTextResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int msgCount;
@property (retain, nonatomic) NSMutableArray *targets;
@property (nonatomic) int status;
@property (retain, nonatomic) NSString *brandWording;
@property (retain, nonatomic) NSString *tolang;
@property (retain, nonatomic) NSMutableArray *rawRet;

+ (void)initialize;

@end
