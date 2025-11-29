@class GetIMBotIDByFormatIDResponse_Data;

@interface GetIMBotIDByFormatIDResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetIMBotIDByFormatIDResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
