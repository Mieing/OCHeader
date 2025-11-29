@class ShowDislikeResponse_Data;

@interface ShowDislikeResponse : IESLivePBBaseMessage

@property (retain, nonatomic) ShowDislikeResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
