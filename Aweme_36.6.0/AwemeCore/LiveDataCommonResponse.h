@class NSString, LiveDataCommonResponse_Data;

@interface LiveDataCommonResponse : IESLivePBBaseMessage

@property (retain, nonatomic) LiveDataCommonResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;
@property (copy, nonatomic) NSString *logid;

+ (id)descriptor;

@end
