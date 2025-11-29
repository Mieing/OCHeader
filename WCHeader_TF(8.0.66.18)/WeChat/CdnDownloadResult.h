@class CdnTransforProfile, CdnBackupDownloadResult, CdnVideoResult, CdnCost, CdnPreloadResult, NSMutableArray, CdnFriendsVideoStrategy, CdnBaseResult, CdnNetworkProfile, CdnStreamingProfile;

@interface CdnDownloadResult : WXPBGeneratedMessage

@property (retain, nonatomic) CdnBaseResult *base;
@property (retain, nonatomic) CdnPreloadResult *preload;
@property (retain, nonatomic) NSMutableArray *files;
@property (retain, nonatomic) CdnCost *cost;
@property (retain, nonatomic) CdnNetworkProfile *network;
@property (retain, nonatomic) CdnTransforProfile *transfor;
@property (retain, nonatomic) CdnVideoResult *video;
@property (retain, nonatomic) CdnStreamingProfile *streaming;
@property (retain, nonatomic) CdnFriendsVideoStrategy *friendsVideo;
@property (retain, nonatomic) CdnBackupDownloadResult *backup;

+ (void)initialize;

@end
