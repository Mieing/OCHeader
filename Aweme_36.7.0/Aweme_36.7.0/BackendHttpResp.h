@class NSData, NSString;

@interface BackendHttpResp : IESLivePBBaseMessage

@property (copy, nonatomic) NSData *data_p;
@property (copy, nonatomic) NSString *dataStr;

+ (id)descriptor;

@end
