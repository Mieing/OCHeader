@class NSString, NSData;

@interface WXMiniProgramObject : NSObject

@property (retain, nonatomic) NSString *webpageUrl;
@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSData *hdImageData;
@property (nonatomic) BOOL withShareTicket;
@property (nonatomic) unsigned long long miniProgramType;
@property (nonatomic) BOOL disableForward;

+ (id)object;

- (void).cxx_destruct;

@end
