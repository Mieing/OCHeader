@class BubbleCreateLiveAnchorStatusConfig, NSString, NSData, FinderLiveTagInfo, FinderLiveModeInfo;

@interface FinderLiveBubbleCreateLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveModeInfo *liveModeInfo;
@property (retain, nonatomic) FinderLiveTagInfo *liveTagInfo;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *descriptionExtend;
@property (nonatomic) unsigned long long liveMode;
@property (retain, nonatomic) NSString *gameAppId;
@property (retain, nonatomic) BubbleCreateLiveAnchorStatusConfig *anchorStatusConfig;
@property (retain, nonatomic) NSData *createLiveBubbleBuffer;

+ (void)initialize;

@end
