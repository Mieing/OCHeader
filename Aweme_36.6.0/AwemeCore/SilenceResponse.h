@class SilenceRes;

@interface SilenceResponse : IESLivePBBaseMessage

@property (retain, nonatomic) SilenceRes *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
