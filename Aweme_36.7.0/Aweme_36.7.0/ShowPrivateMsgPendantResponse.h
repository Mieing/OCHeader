@class ShowPrivateMsgPendantResponse_Data;

@interface ShowPrivateMsgPendantResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ShowPrivateMsgPendantResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
