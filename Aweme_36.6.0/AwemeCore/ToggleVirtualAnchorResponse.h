@class ToggleVirtualAnchorResponse_Data;

@interface ToggleVirtualAnchorResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ToggleVirtualAnchorResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
