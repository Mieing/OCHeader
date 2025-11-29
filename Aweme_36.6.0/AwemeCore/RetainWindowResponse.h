@class RetainWindowResponse_RetainWindowData;

@interface RetainWindowResponse : IESLivePBBaseMessage

@property (retain, nonatomic) RetainWindowResponse_RetainWindowData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
