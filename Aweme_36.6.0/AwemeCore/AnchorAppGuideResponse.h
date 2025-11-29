@class AnchorAppGuideResponse_Data;

@interface AnchorAppGuideResponse : IESLivePBBaseMessage

@property (retain, nonatomic) AnchorAppGuideResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
