@class LightInteractionResponse_ResponseData;

@interface LightInteractionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LightInteractionResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
