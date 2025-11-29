@class NSString, LqtDialog, BaseResponse;

@interface OpenLqbAccountRes : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) LqtDialog *dialog;
@property (retain, nonatomic) NSString *traceInfo;

+ (void)initialize;

@end
