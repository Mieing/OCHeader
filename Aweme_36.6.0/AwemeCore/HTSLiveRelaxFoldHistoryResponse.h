@class HTSLiveRelaxFoldHistoryData;

@interface HTSLiveRelaxFoldHistoryResponse : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveRelaxFoldHistoryData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
