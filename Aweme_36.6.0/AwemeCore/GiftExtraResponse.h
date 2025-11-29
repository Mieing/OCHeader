@class GiftExtraResponse_Data;

@interface GiftExtraResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GiftExtraResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
