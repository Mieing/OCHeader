@class NSString;

@interface SubmitAsyncTTSReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *utf8Text;
@property (nonatomic) int model;
@property (nonatomic) float speed;
@property (nonatomic) float volume;

+ (void)initialize;

@end
