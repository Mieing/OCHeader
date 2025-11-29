@class QuiDtWindowRecordSidebarWelfareResponse_Data;

@interface QuiDtWindowRecordSidebarWelfareResponse : IESLivePBBaseMessage

@property (retain, nonatomic) QuiDtWindowRecordSidebarWelfareResponse_Data *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
