@class EnterLiveResponse_Data;

@interface EnterLiveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) EnterLiveResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
