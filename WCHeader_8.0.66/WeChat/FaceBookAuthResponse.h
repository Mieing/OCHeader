@class NSString, BaseResponse;

@interface FaceBookAuthResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long fbuserId;
@property (retain, nonatomic) NSString *fbuserName;

+ (void)initialize;

@end
