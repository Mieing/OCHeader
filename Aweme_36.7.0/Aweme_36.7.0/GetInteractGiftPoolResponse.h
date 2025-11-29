@class GetInteractGiftPoolResponse_Data;

@interface GetInteractGiftPoolResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetInteractGiftPoolResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
