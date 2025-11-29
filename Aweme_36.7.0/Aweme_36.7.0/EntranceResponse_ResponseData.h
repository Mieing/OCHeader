@class NSString;

@interface EntranceResponse_ResponseData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *payload;
@property (copy, nonatomic) NSString *URL;

+ (id)descriptor;

@end
