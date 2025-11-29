@class HTSLiveRoom;

@interface TopviewResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRoom *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
