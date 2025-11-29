@class NSString, YtExtraOptions;

@interface YtGetLiveTypeReqData : NSObject

@property (retain) NSString *appId;
@property float luxScore;
@property int cpNum;
@property (retain) NSString *extraConfig;
@property (retain) NSString *clientVersion;
@property (retain) YtExtraOptions *extraOptions;
@property (retain) NSString *controlConfig;

- (void).cxx_destruct;

@end
