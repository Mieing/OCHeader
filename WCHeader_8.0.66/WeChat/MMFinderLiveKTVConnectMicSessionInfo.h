@class NSString, LiveSdkInfo;

@interface MMFinderLiveKTVConnectMicSessionInfo : NSObject

@property (copy, nonatomic) NSString *songUniqueId;
@property (nonatomic) BOOL isCgiOK;
@property (copy, nonatomic) NSString *liveMicId;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) LiveSdkInfo *prepareConnectMicSdkInfo;

- (void).cxx_destruct;

@end
