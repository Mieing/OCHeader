@class NSString;

@interface ILinkParams : NSObject

@property (nonatomic) unsigned int wxUin;
@property (copy, nonatomic) NSString *wxUserName;
@property (copy, nonatomic) NSString *sdkAppId;
@property (copy, nonatomic) NSString *sdkGroupId;
@property (copy, nonatomic) NSString *rtmpUrl;
@property (nonatomic) BOOL enableCustomAudio;

- (void).cxx_destruct;

@end
