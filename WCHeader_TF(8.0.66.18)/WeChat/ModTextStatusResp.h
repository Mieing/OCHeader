@class NSString, BaseResponse;

@interface ModTextStatusResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) NSString *textStatusExtInfo;
@property (retain, nonatomic) NSString *privateInfo;

+ (void)initialize;

@end
