@class UrgeGiftListResponse_Data;

@interface UrgeGiftListResponse : IESLivePBBaseMessage

@property (retain, nonatomic) UrgeGiftListResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
