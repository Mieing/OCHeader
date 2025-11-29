@class FormatCommentMsgResponse_Data;

@interface FormatCommentMsgResponse : IESLivePBBaseMessage

@property (retain, nonatomic) FormatCommentMsgResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
