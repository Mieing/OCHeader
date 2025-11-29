@class SetPromotionPageStatusResponse_Data;

@interface SetPromotionPageStatusResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SetPromotionPageStatusResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
