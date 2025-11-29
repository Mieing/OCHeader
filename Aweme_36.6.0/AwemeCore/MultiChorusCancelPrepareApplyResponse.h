@class MultiChorusCancelPrepareApplyResponse_ResponseData;

@interface MultiChorusCancelPrepareApplyResponse : IESLivePBBaseMessage

@property (retain, nonatomic) MultiChorusCancelPrepareApplyResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
