@class OpenKTVComponentResponse_ResponseData;

@interface OpenKTVComponentResponse : IESLivePBBaseMessage

@property (retain, nonatomic) OpenKTVComponentResponse_ResponseData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
