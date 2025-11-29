@class NSString, CreationInfo, IamBizBaseResponse;

@interface CreationReq : WXPBGeneratedMessage

@property (retain, nonatomic) IamBizBaseResponse *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) BOOL read;
@property (retain, nonatomic) CreationInfo *info;

+ (void)initialize;

@end
