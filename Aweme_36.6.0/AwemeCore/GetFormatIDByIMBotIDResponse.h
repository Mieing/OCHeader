@class GetFormatIDByIMBotIDResponse_Data;

@interface GetFormatIDByIMBotIDResponse : IESLivePBBaseMessage

@property (retain, nonatomic) GetFormatIDByIMBotIDResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
