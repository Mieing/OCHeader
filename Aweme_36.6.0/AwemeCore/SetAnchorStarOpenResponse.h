@class SetAnchorStarOpenResponse_Data;

@interface SetAnchorStarOpenResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SetAnchorStarOpenResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
