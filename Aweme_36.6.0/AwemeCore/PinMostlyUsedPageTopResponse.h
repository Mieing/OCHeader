@class PinMostlyUsedPageTopResponse_Data;

@interface PinMostlyUsedPageTopResponse : IESLivePBBaseMessage

@property (retain, nonatomic) PinMostlyUsedPageTopResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
