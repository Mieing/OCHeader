@class StreamControlData;

@interface StreamControlResponse : IESLivePBBaseMessage

@property (retain, nonatomic) StreamControlData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
