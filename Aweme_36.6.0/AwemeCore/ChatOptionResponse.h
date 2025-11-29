@class ChatOptionResponse_ResponseData;

@interface ChatOptionResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ChatOptionResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
