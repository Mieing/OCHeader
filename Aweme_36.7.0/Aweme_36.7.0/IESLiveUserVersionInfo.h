@class NSString;

@interface IESLiveUserVersionInfo : IESLivePBBaseMessage

@property (nonatomic) long long clientVersion;
@property (nonatomic) long long webcastVersion;
@property (nonatomic) long long appId;
@property (copy, nonatomic) NSString *devicePlatform;
@property (copy, nonatomic) NSString *resolutionWidth;
@property (copy, nonatomic) NSString *resolutionHeight;

+ (id)descriptor;

@end
