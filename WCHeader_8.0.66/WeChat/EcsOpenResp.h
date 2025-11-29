@class NSString, NSData;

@interface EcsOpenResp : WXPBGeneratedMessage

@property (nonatomic) int from;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) int ret;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSString *stringData;
@property (retain, nonatomic) NSData *bytesData;

+ (id)create:(id)a0;
+ (void)initialize;

@end
