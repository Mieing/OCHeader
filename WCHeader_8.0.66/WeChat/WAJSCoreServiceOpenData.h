@class WAAppTaskTransitInfo, WAAppTaskReferrerInfo, NSString, NSDictionary, WARunningModeParameter;

@interface WAJSCoreServiceOpenData : NSObject

@property (retain, nonatomic) WAAppTaskReferrerInfo *referrerInfo;
@property (retain, nonatomic) WAAppTaskTransitInfo *transitInfo;
@property (nonatomic) BOOL reLaunch;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSDictionary *extraParamInfo;
@property (retain, nonatomic) NSDictionary *hostExtraData;
@property (copy, nonatomic) NSString *debugLaunchInfo;
@property (copy, nonatomic) NSString *chatroomUsername;
@property (copy, nonatomic) NSString *chatUsername;
@property (nonatomic) unsigned int launchMode;
@property (nonatomic) long long enterForegroundReason;
@property (copy, nonatomic) NSString *mpShortLink;
@property (nonatomic) unsigned int secFlagForSinglePageMode;
@property (retain, nonatomic) WARunningModeParameter *runningModeParams;

- (void).cxx_destruct;

@end
