@class NSString, NSData;

@interface WXDynamicVideoMiniProgramObject : NSObject

@property (copy, nonatomic) NSString *webpageUrl;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSData *hdImageData;
@property (nonatomic) BOOL withShareTicket;
@property (nonatomic) BOOL disableForward;
@property (nonatomic) unsigned long long miniProgramType;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *appThumbUrl;

+ (id)object;

- (void).cxx_destruct;
- (id)init;

@end
