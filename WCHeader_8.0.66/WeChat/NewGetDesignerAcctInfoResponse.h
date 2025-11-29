@class PersonalDesigner, BaseResponse;

@interface NewGetDesignerAcctInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PersonalDesigner *personalDesigner;

+ (void)initialize;

@end
