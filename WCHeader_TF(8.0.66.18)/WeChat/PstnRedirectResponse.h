@class NSMutableArray, BaseResponse;

@interface PstnRedirectResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSMutableArray *addrList;
@property (retain, nonatomic) NSMutableArray *addrListTcp;

+ (void)initialize;

@end
