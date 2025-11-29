@class BaseRequest, NSString;

@interface MusicLiveGetInteractionInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *entityId;

+ (void)initialize;

@end
