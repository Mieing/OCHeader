@class NSString, NSMutableArray, BaseResponse;

@interface GetBankListRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;
@property (retain, nonatomic) NSMutableArray *bcList;
@property (retain, nonatomic) NSMutableArray *topBcList;

+ (void)initialize;

@end
