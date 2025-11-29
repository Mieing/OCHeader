@class SetVisibleRatioResponse_Data;

@interface SetVisibleRatioResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SetVisibleRatioResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
