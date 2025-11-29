@interface WCAdFinderLiveStreamReportModel : WCAdChannelReportExtendInfoModel

@property (nonatomic) long long totalPlayTime;
@property (nonatomic) int joinLiveFlag;
@property (nonatomic) unsigned int joinLiveStartTimestamp;
@property (nonatomic) unsigned int joinLiveEndTimestamp;
@property (nonatomic) int displayType;
@property (nonatomic) int showBrandWallpaperImage;
@property (nonatomic) int showFrontImage;
@property (nonatomic) int horizontalGravity;
@property (nonatomic) int verticalGravity;

@end
