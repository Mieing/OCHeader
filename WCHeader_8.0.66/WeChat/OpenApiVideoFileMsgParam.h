@class NSString;

@interface OpenApiVideoFileMsgParam : NSObject

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) long long maxVideoTime;
@property (copy, nonatomic) NSString *videoCompressParams;

- (void).cxx_destruct;

@end
